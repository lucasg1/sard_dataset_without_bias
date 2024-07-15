typedef struct _CWE134_Uncontrolled_Format_String__char_environment_w32_vsnprintf_67_structType
{
    char * structFirst;
} CWE134_Uncontrolled_Format_String__char_environment_w32_vsnprintf_67_structType;
void FUN0(CWE134_Uncontrolled_Format_String__char_environment_w32_vsnprintf_67_structType myStruct);
void FUN1()
{
    char * data;
    CWE134_Uncontrolled_Format_String__char_environment_w32_vsnprintf_67_structType myStruct;
    char dataBuffer[100] = "";
    data = dataBuffer;
    strcpy(data, "fixedstringtest");
    myStruct.structFirst = data;
    FUN0(myStruct);
}
void FUN2(CWE134_Uncontrolled_Format_String__char_environment_w32_vsnprintf_67_structType myStruct);
void FUN3()
{
    char * data;
    CWE134_Uncontrolled_Format_String__char_environment_w32_vsnprintf_67_structType myStruct;
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
    myStruct.structFirst = data;
    FUN2(myStruct);
}
typedef struct _CWE134_Uncontrolled_Format_String__char_environment_w32_vsnprintf_67_structType
{
    char * structFirst;
} CWE134_Uncontrolled_Format_String__char_environment_w32_vsnprintf_67_structType;
void FUN5(char * data, ...)
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
void FUN0(CWE134_Uncontrolled_Format_String__char_environment_w32_vsnprintf_67_structType myStruct)
{
    char * data = myStruct.structFirst;
    FUN5(data, data);
}
void FUN7(char * data, ...)
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
void FUN2(CWE134_Uncontrolled_Format_String__char_environment_w32_vsnprintf_67_structType myStruct)
{
    char * data = myStruct.structFirst;
    FUN7(data, data);
}
