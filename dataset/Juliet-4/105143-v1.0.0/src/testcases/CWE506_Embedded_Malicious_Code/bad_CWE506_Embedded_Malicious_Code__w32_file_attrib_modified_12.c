void FUN0()
{
    if(globalReturnsTrueOrFalse())
    {
        {
            FILETIME ftModified;
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
                if (GetFileTime(hFile,
                                NULL,
                                NULL,
                                &ftModified) == 0)
                {
                    break;
                }
                qwResult = (((ULONGLONG) ftModified.dwHighDateTime) << 32) + ftModified.dwLowDateTime;
                qwResult -= 10 * _DAY;
                ftModified.dwLowDateTime  = (DWORD)(qwResult & 0xFFFFFFFF);
                ftModified.dwHighDateTime = (DWORD)(qwResult >> 32);
<START>
                SetFileTime(hFile,
<END>
                            (LPFILETIME)NULL,
                            (LPFILETIME)NULL,
                            &ftModified);
            }
            while (0);
            if (hFile != INVALID_HANDLE_VALUE)
            {
                CloseHandle(hFile);
            }
        }
    }
    else
    {
        {
            HANDLE hFile = CreateFile(TEXT("goodFile.txt"),
                                      GENERIC_READ | GENERIC_WRITE,
                                      0,
                                      NULL,
                                      CREATE_ALWAYS,
                                      FILE_ATTRIBUTE_NORMAL, NULL);
            if (hFile != INVALID_HANDLE_VALUE)
            {
                CloseHandle(hFile);
            }
        }
    }
}
