void FUN0()
{
    if(globalReturnsTrue())
    {
        {
            HDC hdcWindow = NULL;
            HDC hdcMemDC = NULL;
            HBITMAP hbmScreen = NULL;
            HGDIOBJ selectResult = NULL;
            BITMAP bmpScreen;
            RECT rcClient;
            BITMAPFILEHEADER   bmfHeader;
            BITMAPINFOHEADER   bmiHeader;
            DWORD dwBmpSize;
            HANDLE hDIB = NULL;
            char *lpbitmap = NULL;
            HANDLE hFile = INVALID_HANDLE_VALUE;
            DWORD dwSizeofDIB;
            DWORD dwBytesWritten;
            HWND hWnd = GetDesktopWindow();
            do
            {
                hdcWindow = GetDC(hWnd);
                if (hdcWindow == NULL)
                {
                    break;
                }
                hdcMemDC = CreateCompatibleDC(hdcWindow);
                if (hdcMemDC == NULL)
                {
                    break;
                }
                if (GetClientRect(hWnd, &rcClient) == 0)
                {
                    break;
                }
                hbmScreen = CreateCompatibleBitmap(hdcWindow, rcClient.right-rcClient.left, rcClient.bottom-rcClient.top);
                if (hbmScreen == NULL)
                {
                    break;
                }
                selectResult = SelectObject(hdcMemDC,hbmScreen);
                if (selectResult == NULL || selectResult == HGDI_ERROR)
                {
                    break;
                }
                if (BitBlt(hdcMemDC,
                           0,0,
                           rcClient.right-rcClient.left, rcClient.bottom-rcClient.top,
                           hdcWindow,
                           0,0,
                           SRCCOPY) == 0)
                {
                    break;
                }
                if (GetObject(hbmScreen,sizeof(BITMAP),&bmpScreen) == 0)
                {
                    break;
                }
                bmiHeader.biSize = sizeof(BITMAPINFOHEADER);
                bmiHeader.biWidth = bmpScreen.bmWidth;
                bmiHeader.biHeight = bmpScreen.bmHeight;
                bmiHeader.biPlanes = 1;
                bmiHeader.biBitCount = 32;
                bmiHeader.biCompression = BI_RGB;
                bmiHeader.biSizeImage = 0;
                bmiHeader.biXPelsPerMeter = 0;
                bmiHeader.biYPelsPerMeter = 0;
                bmiHeader.biClrUsed = 0;
                bmiHeader.biClrImportant = 0;
                dwBmpSize = ((bmpScreen.bmWidth * bmiHeader.biBitCount + 31) / 32) * 4 * bmpScreen.bmHeight;
                hDIB = GlobalAlloc(GHND,dwBmpSize);
                if (hDIB == NULL)
                {
                    break;
                }
                lpbitmap = (char *)GlobalLock(hDIB);
                if (lpbitmap == NULL)
                {
                    break;
                }
                if (GetDIBits(hdcWindow, hbmScreen, 0,
                              (UINT)bmpScreen.bmHeight,
                              lpbitmap,
                              (BITMAPINFO *)&bmiHeader, DIB_RGB_COLORS) == 0)
                {
                    break;
                }
                hFile = CreateFile(TEXT("capture.bmp"),
                                   GENERIC_WRITE,
                                   0,
                                   NULL,
                                   CREATE_ALWAYS,
                                   FILE_ATTRIBUTE_NORMAL, NULL);
                if (hFile == INVALID_HANDLE_VALUE)
                {
                    break;
                }
                dwSizeofDIB = dwBmpSize + sizeof(BITMAPFILEHEADER) + sizeof(BITMAPINFOHEADER);
                bmfHeader.bfOffBits = (DWORD)sizeof(BITMAPFILEHEADER) + (DWORD)sizeof(BITMAPINFOHEADER);
                bmfHeader.bfSize = dwSizeofDIB;
                bmfHeader.bfType = 0x4D42; 
                dwBytesWritten = 0;
<START>
                if (WriteFile(hFile, (LPSTR)&bmfHeader, sizeof(BITMAPFILEHEADER), &dwBytesWritten, NULL) == 0)
<END>
                {
                    break;
                }
                if (WriteFile(hFile, (LPSTR)&bmiHeader, sizeof(BITMAPINFOHEADER), &dwBytesWritten, NULL) == 0)
                {
                    break;
                }
                if (WriteFile(hFile, (LPSTR)lpbitmap, dwBmpSize, &dwBytesWritten, NULL) == 0)
                {
                    break;
                }
            }
            while (0);
            if (hDIB != NULL)
            {
                GlobalUnlock(hDIB);
                GlobalFree(hDIB);
            }
            if (hFile != INVALID_HANDLE_VALUE)
            {
                CloseHandle(hFile);
            }
            if (hbmScreen != NULL)
            {
                DeleteObject(hbmScreen);
            }
            if (hdcMemDC != NULL)
            {
                DeleteObject(hdcMemDC);
            }
            if (hdcWindow != NULL)
            {
                ReleaseDC(hWnd,hdcWindow);
            }
        }
    }
}
