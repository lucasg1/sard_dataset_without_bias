typedef struct _CWE427_Uncontrolled_Search_Path_Element__wchar_t_environment_67_structType
{
    wchar_t * structFirst;
} CWE427_Uncontrolled_Search_Path_Element__wchar_t_environment_67_structType;
void FUN0(CWE427_Uncontrolled_Search_Path_Element__wchar_t_environment_67_structType myStruct);
void FUN1()
{
    wchar_t * data;
    CWE427_Uncontrolled_Search_Path_Element__wchar_t_environment_67_structType myStruct;
    wchar_t dataBuffer[250] = L"PATH=";
    data = dataBuffer;
    {
        size_t dataLen = wcslen(data);
        wchar_t * environment = GETENV(ENV_VARIABLE);
        if (environment != NULL)
        {
            wcsncat(data+dataLen, environment, 250-dataLen-1);
        }
    }
    myStruct.structFirst = data;
    FUN0(myStruct);
}
typedef struct _CWE427_Uncontrolled_Search_Path_Element__wchar_t_environment_67_structType
{
    wchar_t * structFirst;
} CWE427_Uncontrolled_Search_Path_Element__wchar_t_environment_67_structType;
void FUN0(CWE427_Uncontrolled_Search_Path_Element__wchar_t_environment_67_structType myStruct)
{
    wchar_t * data = myStruct.structFirst;
<START>
    PUTENV(data);
<END>
}
