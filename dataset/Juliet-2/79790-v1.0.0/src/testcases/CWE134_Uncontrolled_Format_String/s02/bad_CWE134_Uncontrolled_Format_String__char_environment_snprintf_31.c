void FUN0()
{
    char * data;
    char dataBuffer[100] = "";
    data = dataBuffer;
    {
        size_t dataLen = strlen(data);
        char * environment = GETENV(ENV_VARIABLE);
        if (environment != NULL)
        {
            strncat(data+dataLen, environment, 100-dataLen-1);
        }
    }
    {
        char * dataCopy = data;
        char * data = dataCopy;
        {
            char dest[100] = "";
<START>
            SNPRINTF(dest, 100-1, data);
<END>
            printLine(dest);
        }
    }
}
