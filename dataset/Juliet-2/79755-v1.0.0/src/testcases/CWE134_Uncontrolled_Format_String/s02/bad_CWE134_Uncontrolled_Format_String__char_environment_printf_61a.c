char * FUN0(char * data)
{
    {
        size_t dataLen = strlen(data);
        char * environment = GETENV(ENV_VARIABLE);
        if (environment != NULL)
        {
            strncat(data+dataLen, environment, 100-dataLen-1);
        }
    }
    return data;
}
char * FUN0(char * data);
void FUN2()
{
    char * data;
    char dataBuffer[100] = "";
    data = dataBuffer;
    data = FUN0(data);
<START>
    printf(data);
<END>
}
