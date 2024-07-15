namespace NAMESPACE0
{
void FUN0(char * &data)
{
    {
        size_t dataLen = strlen(data);
        char * environment = GETENV(ENV_VARIABLE);
        if (environment != NULL)
        {
            strncat(data+dataLen, environment, 100-dataLen-1);
        }
    }
}
void FUN1()
{
    char * data;
    char dataBuffer[100] = "";
    data = dataBuffer;
    FUN0(data);
    {
        char dest[100] = "";
<START>
        SNPRINTF(dest, 100-1, data);
<END>
        printLine(dest);
    }
}
} 
