typedef struct _CWE134_Uncontrolled_Format_String__wchar_t_environment_snprintf_67_structType
{
    wchar_t * structFirst;
} CWE134_Uncontrolled_Format_String__wchar_t_environment_snprintf_67_structType;
void FUN0(CWE134_Uncontrolled_Format_String__wchar_t_environment_snprintf_67_structType myStruct);
void FUN1()
{
    wchar_t * data;
    CWE134_Uncontrolled_Format_String__wchar_t_environment_snprintf_67_structType myStruct;
    wchar_t dataBuffer[100] = L"";
    data = dataBuffer;
    {
        size_t dataLen = wcslen(data);
        wchar_t * environment = GETENV(ENV_VARIABLE);
        if (environment != NULL)
        {
            wcsncat(data+dataLen, environment, 100-dataLen-1);
        }
    }
    myStruct.structFirst = data;
    FUN0(myStruct);
}
typedef struct _CWE134_Uncontrolled_Format_String__wchar_t_environment_snprintf_67_structType
{
    wchar_t * structFirst;
} CWE134_Uncontrolled_Format_String__wchar_t_environment_snprintf_67_structType;
void FUN0(CWE134_Uncontrolled_Format_String__wchar_t_environment_snprintf_67_structType myStruct)
{
    wchar_t * data = myStruct.structFirst;
    {
        wchar_t dest[100] = L"";
<START>
        SNPRINTF(dest, 100-1, data);
<END>
        printWLine(dest);
    }
}
