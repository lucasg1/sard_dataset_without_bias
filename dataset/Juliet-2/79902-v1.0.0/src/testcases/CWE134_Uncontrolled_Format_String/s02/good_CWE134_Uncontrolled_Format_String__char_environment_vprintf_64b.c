void FUN0(void * dataVoidPtr);
void FUN1()
{
    char * data;
    char dataBuffer[100] = "";
    data = dataBuffer;
    strcpy(data, "fixedstringtest");
    FUN0(&data);
}
void FUN2(void * dataVoidPtr);
void FUN3()
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
    FUN2(&data);
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
void FUN0(void * dataVoidPtr)
{
    char * * dataPtr = (char * *)dataVoidPtr;
    char * data = (*dataPtr);
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
void FUN2(void * dataVoidPtr)
{
    char * * dataPtr = (char * *)dataVoidPtr;
    char * data = (*dataPtr);
    FUN7(data, data);
}
