namespace NAMESPACE0
{
void FUN0(char * data);
void FUN1()
{
    char * data;
    void (*funcPtr) (char *) = FUN0;
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
    funcPtr(data);
}
} 
namespace NAMESPACE0
{
void FUN0(char * data)
{
    {
        FILE *pFile = NULL;
<START>
        pFile = FOPEN(data, "wb+");
<END>
        if (pFile != NULL)
        {
            fclose(pFile);
        }
    }
}
} 
