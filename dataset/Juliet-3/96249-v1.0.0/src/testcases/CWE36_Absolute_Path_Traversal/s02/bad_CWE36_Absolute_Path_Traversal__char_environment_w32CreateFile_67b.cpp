namespace NAMESPACE0
{
typedef struct _structType
{
    char * structFirst;
} structType;
void FUN0(structType myStruct);
void FUN1()
{
    char * data;
    structType myStruct;
    char dataBuffer[FILENAME_MAX] = "";
    data = dataBuffer;
    {
        size_t dataLen = strlen(data);
        char * environment = GETENV(ENV_VARIABLE);
        if (environment != NULL)
        {
            strncat(data+dataLen, environment, FILENAME_MAX-dataLen-1);
        }
    }
    myStruct.structFirst = data;
    FUN0(myStruct);
}
} 
namespace NAMESPACE0
{
typedef struct _structType
{
    char * structFirst;
} structType;
void FUN0(structType myStruct)
{
    char * data = myStruct.structFirst;
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
}
} 
