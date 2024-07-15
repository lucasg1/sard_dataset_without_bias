namespace NAMESPACE0
{
void FUN0(char * data);
void FUN1(char * data)
{
    FUN0(data);
}
} 
namespace NAMESPACE0
{
void FUN1(char * data);
void FUN3(char * data)
{
    FUN1(data);
}
} 
namespace NAMESPACE0
{
void FUN3(char * data);
void FUN5(char * data)
{
    FUN3(data);
}
} 
namespace NAMESPACE0
{
void FUN5(char * data);
void FUN7()
{
    char * data;
    char dataBuffer[FILENAME_MAX] = "";
    data = dataBuffer;
    strcat(data, "c:\\temp\\file.txt");
    strcat(data, "/tmp/file.txt");
    FUN5(data);
}
} 
namespace NAMESPACE0
{
void FUN0(char * data)
{
    {
        HANDLE hFile;
        hFile = CreateFileA(data,
                            (GENERIC_WRITE|GENERIC_READ),
                            0,
                            NULL,
                            OPEN_ALWAYS,
                            FILE_ATTRIBUTE_NORMAL,
                            NULL);
        if (hFile != INVALID_HANDLE_VALUE)
        {
            CloseHandle(hFile);
        }
    }
}
} 
