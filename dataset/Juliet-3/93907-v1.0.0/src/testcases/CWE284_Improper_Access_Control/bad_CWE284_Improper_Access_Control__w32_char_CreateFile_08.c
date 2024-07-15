static int FUN0()
{
    return 1;
}
static int FUN1()
{
    return 0;
}
void FUN2()
{
    if(FUN0())
    {
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
    }
}
