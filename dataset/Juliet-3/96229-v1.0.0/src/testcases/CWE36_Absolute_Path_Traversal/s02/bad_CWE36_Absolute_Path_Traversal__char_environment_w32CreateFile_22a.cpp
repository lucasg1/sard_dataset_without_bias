namespace NAMESPACE0
{
extern int VAR1;
char * FUN0(char * data)
{
    if(VAR1)
    {
        {
            size_t dataLen = strlen(data);
            char * environment = GETENV(ENV_VARIABLE);
            if (environment != NULL)
            {
                strncat(data+dataLen, environment, FILENAME_MAX-dataLen-1);
            }
        }
    }
    return data;
}
} 
namespace NAMESPACE0
{
int VAR1 = 0;
char * FUN0(char * data);
void FUN2()
{
    char * data;
    char dataBuffer[FILENAME_MAX] = "";
    data = dataBuffer;
    VAR1 = 1; 
    data = FUN0(data);
    {
        HANDLE hFile;
<START>
        hFile = CreateFileA(data,
<END>
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
