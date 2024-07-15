void FUN0()
{
    switch(6)
    {
    case 6:
    {
        HANDLE hFile;
        char * fileName = "C:\\temp\\file.txt";
<START>
        hFile = CreateFileA(
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
    break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
