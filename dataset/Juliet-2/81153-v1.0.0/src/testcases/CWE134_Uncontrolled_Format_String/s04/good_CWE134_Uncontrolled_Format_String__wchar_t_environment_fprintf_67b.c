typedef struct _CWE134_Uncontrolled_Format_String__wchar_t_environment_fprintf_67_structType
{
    wchar_t * structFirst;
} CWE134_Uncontrolled_Format_String__wchar_t_environment_fprintf_67_structType;
void FUN0(CWE134_Uncontrolled_Format_String__wchar_t_environment_fprintf_67_structType myStruct);
void FUN1()
{
    wchar_t * data;
    CWE134_Uncontrolled_Format_String__wchar_t_environment_fprintf_67_structType myStruct;
    wchar_t dataBuffer[100] = L"";
    data = dataBuffer;
    wcscpy(data, L"fixedstringtest");
    myStruct.structFirst = data;
    FUN0(myStruct);
}
void FUN2(CWE134_Uncontrolled_Format_String__wchar_t_environment_fprintf_67_structType myStruct);
void FUN3()
{
    wchar_t * data;
    CWE134_Uncontrolled_Format_String__wchar_t_environment_fprintf_67_structType myStruct;
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
typedef struct _CWE134_Uncontrolled_Format_String__wchar_t_environment_fprintf_67_structType
{
    wchar_t * structFirst;
} CWE134_Uncontrolled_Format_String__wchar_t_environment_fprintf_67_structType;
void FUN0(CWE134_Uncontrolled_Format_String__wchar_t_environment_fprintf_67_structType myStruct)
{
    wchar_t * data = myStruct.structFirst;
    fwprintf(stdout, data);
}
void FUN2(CWE134_Uncontrolled_Format_String__wchar_t_environment_fprintf_67_structType myStruct)
{
    wchar_t * data = myStruct.structFirst;
    fwprintf(stdout, L"%s\n", data);
}
