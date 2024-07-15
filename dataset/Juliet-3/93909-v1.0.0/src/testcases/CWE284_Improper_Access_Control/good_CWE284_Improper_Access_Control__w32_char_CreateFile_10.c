void FUN0()
{
    if(globalFalse)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        {
            HANDLE hFile;
            char * fileName = "C:\\temp\\file.txt";
            hFile = CreateFileA(
                        fileName,
                        GENERIC_READ,
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
void FUN1()
{
    if(globalTrue)
    {
        {
            HANDLE hFile;
            char * fileName = "C:\\temp\\file.txt";
            hFile = CreateFileA(
                        fileName,
                        GENERIC_READ,
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
