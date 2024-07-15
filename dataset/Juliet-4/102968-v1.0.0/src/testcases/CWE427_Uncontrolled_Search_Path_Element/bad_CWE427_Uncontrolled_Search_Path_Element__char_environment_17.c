void FUN0()
{
    int i;
    char * data;
    char dataBuffer[250] = "PATH=";
    data = dataBuffer;
    for(i = 0; i < 1; i++)
    {
        {
            size_t dataLen = strlen(data);
            char * environment = GETENV(ENV_VARIABLE);
            if (environment != NULL)
            {
                strncat(data+dataLen, environment, 250-dataLen-1);
            }
        }
    }
<START>
    PUTENV(data);
<END>
}
