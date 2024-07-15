namespace NAMESPACE0
{
void FUN0(char * &data)
{
    strcpy(data, "fixedstringtest");
}
void FUN1(char * &data)
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
} 
namespace NAMESPACE0
{
void FUN0(char * &data);
void FUN3(char * data, ...)
{
    {
        va_list args;
        va_start(args, data);
        vprintf(data, args);
        va_end(args);
    }
}
void FUN4()
{
    char * data;
    char dataBuffer[100] = "";
    data = dataBuffer;
    FUN0(data);
    FUN3(data, data);
}
void FUN1(char * &data);
void FUN6(char * data, ...)
{
    {
        va_list args;
        va_start(args, data);
        vprintf("%s", args);
        va_end(args);
    }
}
void FUN7()
{
    char * data;
    char dataBuffer[100] = "";
    data = dataBuffer;
    FUN1(data);
    FUN6(data, data);
}
} 
