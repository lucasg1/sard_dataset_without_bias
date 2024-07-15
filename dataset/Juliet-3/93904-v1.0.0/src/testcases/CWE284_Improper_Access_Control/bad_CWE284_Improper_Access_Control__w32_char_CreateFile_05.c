static int staticTrue = 1; 
static int staticFalse = 0; 
void FUN0()
{
    if(staticTrue)
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
