static const int STATIC_CONST_TRUE = 1; 
static const int STATIC_CONST_FALSE = 0; 
void FUN0()
{
    if(STATIC_CONST_TRUE)
    {
        {
            FILETIME ftCreate;
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
                                &ftCreate,
                                NULL,
                                NULL) == 0)
                {
                    break;
                }
                qwResult = (((ULONGLONG) ftCreate.dwHighDateTime) << 32) + ftCreate.dwLowDateTime;
                qwResult -= 10 * _DAY;
                ftCreate.dwLowDateTime  = (DWORD)(qwResult & 0xFFFFFFFF);
                ftCreate.dwHighDateTime = (DWORD)(qwResult >> 32);
<START>
                SetFileTime(hFile,
<END>
                            &ftCreate,
                            (LPFILETIME)NULL,
                            (LPFILETIME)NULL);
            }
            while (0);
            if (hFile != INVALID_HANDLE_VALUE)
            {
                CloseHandle(hFile);
            }
        }
    }
}
