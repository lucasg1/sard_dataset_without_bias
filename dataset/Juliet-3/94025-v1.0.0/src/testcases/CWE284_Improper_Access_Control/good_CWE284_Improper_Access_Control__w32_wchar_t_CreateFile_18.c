void FUN0()
{
    goto sink;
sink:
    {
        HANDLE hFile;
        wchar_t * fileName = L"C:\\temp\\file.txt";
        hFile = CreateFileW(
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
