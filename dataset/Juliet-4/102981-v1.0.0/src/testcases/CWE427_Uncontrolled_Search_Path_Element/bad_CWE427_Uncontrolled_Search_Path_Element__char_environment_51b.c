void FUN0(char * data);
void FUN1()
{
    char * data;
    char dataBuffer[250] = "PATH=";
    data = dataBuffer;
    {
        size_t dataLen = strlen(data);
        char * environment = GETENV(ENV_VARIABLE);
        if (environment != NULL)
        {
            strncat(data+dataLen, environment, 250-dataLen-1);
        }
    }
    FUN0(data);
}
void FUN0(char * data)
{
<START>
    PUTENV(data);
<END>
}
