void FUN0()
{
    switch(6)
    {
    case 6:
    {
        FILETIME ftAccess;
        ULONGLONG qwResult;
        HANDLE hFile = INVALID_HANDLE_VALUE;
        do
        {
            hFile = CreateFile(TEXT("badFile.txt"),
                               GENERIC_READ | GENERIC_WRITE, 
                               0,
                               NULL,
                               CREATE_ALWAYS,
                               FILE_ATTRIBUTE_NORMAL, NULL);
            if (hFile == INVALID_HANDLE_VALUE)
            {
                break;
            }
            if (!GetFileTime(hFile,
                             NULL,
                             &ftAccess,
                             NULL))
            {
                break;
            }
            qwResult = (((ULONGLONG) ftAccess.dwHighDateTime) << 32) + ftAccess.dwLowDateTime;
            qwResult -= 10 * _DAY;
            ftAccess.dwLowDateTime  = (DWORD)(qwResult & 0xFFFFFFFF);
            ftAccess.dwHighDateTime = (DWORD)(qwResult >> 32);
<START>
            SetFileTime(hFile,
<END>
                        (LPFILETIME)NULL,
                        &ftAccess,
                        (LPFILETIME)NULL);
        }
        while (0);
        if (hFile != INVALID_HANDLE_VALUE)
        {
            CloseHandle(hFile);
        }
    }
    break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
