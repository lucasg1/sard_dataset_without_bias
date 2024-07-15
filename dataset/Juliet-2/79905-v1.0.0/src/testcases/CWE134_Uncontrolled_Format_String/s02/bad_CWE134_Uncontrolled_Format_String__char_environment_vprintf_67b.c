typedef struct _CWE134_Uncontrolled_Format_String__char_environment_vprintf_67_structType
{
    char * structFirst;
} CWE134_Uncontrolled_Format_String__char_environment_vprintf_67_structType;
void FUN0(CWE134_Uncontrolled_Format_String__char_environment_vprintf_67_structType myStruct);
void FUN1()
{
    char * data;
    CWE134_Uncontrolled_Format_String__char_environment_vprintf_67_structType myStruct;
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
    FUN0(myStruct);
}
typedef struct _CWE134_Uncontrolled_Format_String__char_environment_vprintf_67_structType
{
    char * structFirst;
} CWE134_Uncontrolled_Format_String__char_environment_vprintf_67_structType;
void FUN2(char * data, ...)
{
    {
        va_list args;
        va_start(args, data);
<START>
        vprintf(data, args);
<END>
        va_end(args);
    }
}
void FUN0(CWE134_Uncontrolled_Format_String__char_environment_vprintf_67_structType myStruct)
{
    char * data = myStruct.structFirst;
    FUN2(data, data);
}
