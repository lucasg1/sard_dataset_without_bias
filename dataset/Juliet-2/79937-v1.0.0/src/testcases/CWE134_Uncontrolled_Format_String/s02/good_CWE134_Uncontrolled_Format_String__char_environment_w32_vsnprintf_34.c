typedef union
{
    char * unionFirst;
    char * unionSecond;
} CWE134_Uncontrolled_Format_String__char_environment_w32_vsnprintf_34_unionType;
void FUN0(char * data, ...)
{
    {
        char dest[100] = "";
        va_list args;
        va_start(args, data);
        vsnprintf(dest, 100-1, data, args);
        va_end(args);
        printLine(dest);
    }
}
void FUN1()
{
    char * data;
    CWE134_Uncontrolled_Format_String__char_environment_w32_vsnprintf_34_unionType myUnion;
    char dataBuffer[100] = "";
    data = dataBuffer;
    strcpy(data, "fixedstringtest");
    myUnion.unionFirst = data;
    {
        char * data = myUnion.unionSecond;
        FUN0(data, data);
    }
}
void FUN2(char * data, ...)
{
    {
        char dest[100] = "";
        va_list args;
        va_start(args, data);
        vsnprintf(dest, 100-1, "%s", args);
        va_end(args);
        printLine(dest);
    }
}
void FUN3()
{
    char * data;
    CWE134_Uncontrolled_Format_String__char_environment_w32_vsnprintf_34_unionType myUnion;
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
    myUnion.unionFirst = data;
    {
        char * data = myUnion.unionSecond;
        FUN2(data, data);
    }
}
