void FUN0()
{
    if(GLOBAL_CONST_FIVE==5)
    {
        {
            HANDLE hFile;
            wchar_t * fileName = L"C:\\temp\\file.txt";
<START>
            hFile = CreateFileW(
<END>
                        fileName,
                        FILE_ALL_ACCESS,
                        FILE_SHARE_READ,
                        NULL,
                        CREATE_NEW,
                        FILE_ATTRIBUTE_NORMAL,
                        NULL);
            if (hFile == INVALID_HANDLE_VALUE)
            {
                printLine("File could not be created");
            }
            else
            {
                printLine("File created successfully");
                CloseHandle(hFile);
            }
        }
    }
}
