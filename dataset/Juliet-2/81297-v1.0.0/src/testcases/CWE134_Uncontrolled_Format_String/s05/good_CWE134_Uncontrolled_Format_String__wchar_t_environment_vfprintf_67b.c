typedef struct _CWE134_Uncontrolled_Format_String__wchar_t_environment_vfprintf_67_structType
{
    wchar_t * structFirst;
} CWE134_Uncontrolled_Format_String__wchar_t_environment_vfprintf_67_structType;
void FUN0(CWE134_Uncontrolled_Format_String__wchar_t_environment_vfprintf_67_structType myStruct);
void FUN1()
{
    wchar_t * data;
    CWE134_Uncontrolled_Format_String__wchar_t_environment_vfprintf_67_structType myStruct;
    wchar_t dataBuffer[100] = L"";
    data = dataBuffer;
    wcscpy(data, L"fixedstringtest");
    myStruct.structFirst = data;
    FUN0(myStruct);
}
void FUN2(CWE134_Uncontrolled_Format_String__wchar_t_environment_vfprintf_67_structType myStruct);
void FUN3()
{
    wchar_t * data;
    CWE134_Uncontrolled_Format_String__wchar_t_environment_vfprintf_67_structType myStruct;
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
    FUN2(myStruct);
}
typedef struct _CWE134_Uncontrolled_Format_String__wchar_t_environment_vfprintf_67_structType
{
    wchar_t * structFirst;
} CWE134_Uncontrolled_Format_String__wchar_t_environment_vfprintf_67_structType;
void FUN5(wchar_t * data, ...)
{
    {
        va_list args;
        va_start(args, data);
        vfwprintf(stdout, data, args);
        va_end(args);
    }
}
void FUN0(CWE134_Uncontrolled_Format_String__wchar_t_environment_vfprintf_67_structType myStruct)
{
    wchar_t * data = myStruct.structFirst;
    FUN5(data, data);
}
void FUN7(wchar_t * data, ...)
{
    {
        va_list args;
        va_start(args, data);
        vfwprintf(stdout, L"%s", args);
        va_end(args);
    }
}
void FUN2(CWE134_Uncontrolled_Format_String__wchar_t_environment_vfprintf_67_structType myStruct)
{
    wchar_t * data = myStruct.structFirst;
    FUN7(data, data);
}
