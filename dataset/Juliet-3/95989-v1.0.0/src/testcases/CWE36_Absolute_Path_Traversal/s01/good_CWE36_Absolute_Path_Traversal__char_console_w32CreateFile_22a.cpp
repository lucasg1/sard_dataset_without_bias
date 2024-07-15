namespace NAMESPACE0
{
extern int VAR1;
extern int VAR2;
char * FUN0(char * data)
{
    if(VAR1)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        strcat(data, "c:\\temp\\file.txt");
        strcat(data, "/tmp/file.txt");
    }
    return data;
}
char * FUN1(char * data)
{
    if(VAR2)
    {
        strcat(data, "c:\\temp\\file.txt");
        strcat(data, "/tmp/file.txt");
    }
    return data;
}
} 
namespace NAMESPACE0
{
int VAR1 = 0;
int VAR2 = 0;
char * FUN0(char * data);
void FUN3()
{
    char * data;
    char dataBuffer[FILENAME_MAX] = "";
    data = dataBuffer;
    VAR1 = 0; 
    data = FUN0(data);
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
    ;
}
char * FUN1(char * data);
void FUN5()
{
    char * data;
    char dataBuffer[FILENAME_MAX] = "";
    data = dataBuffer;
    VAR2 = 1; 
    data = FUN1(data);
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
    ;
}
} 
