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
void FUN2(char * data);
void FUN0(char * data)
{
    FUN2(data);
}
} 
namespace NAMESPACE0
{
void FUN1(char * data);
void FUN5()
{
    char * data;
    char dataBuffer[FILENAME_MAX] = BASEPATH;
    data = dataBuffer;
    {
        size_t dataLen = strlen(data);
        char * environment = GETENV(ENV_VARIABLE);
        if (environment != NULL)
        {
            strncat(data+dataLen, environment, FILENAME_MAX-dataLen-1);
        }
    }
    FUN1(data);
}
} 
namespace NAMESPACE0
{
void FUN2(char * data)
{
    {
        int fileDesc;
<START>
        fileDesc = OPEN(data, O_RDWR|O_CREAT, S_IREAD|S_IWRITE);
<END>
        if (fileDesc != -1)
        {
            CLOSE(fileDesc);
        }
    }
}
} 
