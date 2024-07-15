void FUN0()
{
    switch(5)
    {
    case 6:
        printLine("Benign, fixed string");
        break;
    default:
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
    break;
    }
}
void FUN1()
{
    switch(6)
    {
    case 6:
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
    break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
