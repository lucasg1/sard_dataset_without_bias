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
void FUN3()
{
    char * data;
    char dataBuffer[100] = "";
    data = dataBuffer;
    FUN0(data);
    {
        char dest[100] = "";
        SNPRINTF(dest, 100-1, data);
        printLine(dest);
    }
}
void FUN1(char * &data);
void FUN5()
{
    char * data;
    char dataBuffer[100] = "";
    data = dataBuffer;
    FUN1(data);
    {
        char dest[100] = "";
        SNPRINTF(dest, 100-1, "%s", data);
        printLine(dest);
    }
}
} 
