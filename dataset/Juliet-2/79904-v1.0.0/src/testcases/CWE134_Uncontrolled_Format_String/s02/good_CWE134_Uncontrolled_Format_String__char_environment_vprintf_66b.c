void FUN0(char * dataArray[]);
void FUN1()
{
    char * data;
    char * dataArray[5];
    char dataBuffer[100] = "";
    data = dataBuffer;
    strcpy(data, "fixedstringtest");
    dataArray[2] = data;
    FUN0(dataArray);
}
void FUN2(char * dataArray[]);
void FUN3()
{
    char * data;
    char * dataArray[5];
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
    dataArray[2] = data;
    FUN2(dataArray);
}
void FUN5(char * data, ...)
{
    {
        va_list args;
        va_start(args, data);
        vprintf(data, args);
        va_end(args);
    }
}
void FUN0(char * dataArray[])
{
    char * data = dataArray[2];
    FUN5(data, data);
}
void FUN7(char * data, ...)
{
    {
        va_list args;
        va_start(args, data);
        vprintf("%s", args);
        va_end(args);
    }
}
void FUN2(char * dataArray[])
{
    char * data = dataArray[2];
    FUN7(data, data);
}
