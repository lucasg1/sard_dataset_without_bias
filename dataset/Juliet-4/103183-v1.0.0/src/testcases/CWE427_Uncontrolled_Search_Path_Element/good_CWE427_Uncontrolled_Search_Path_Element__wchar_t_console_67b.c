typedef struct _CWE427_Uncontrolled_Search_Path_Element__wchar_t_console_67_structType
{
    wchar_t * structFirst;
} CWE427_Uncontrolled_Search_Path_Element__wchar_t_console_67_structType;
void FUN0(CWE427_Uncontrolled_Search_Path_Element__wchar_t_console_67_structType myStruct);
void FUN1()
{
    wchar_t * data;
    CWE427_Uncontrolled_Search_Path_Element__wchar_t_console_67_structType myStruct;
    wchar_t dataBuffer[250] = L"PATH=";
    data = dataBuffer;
    wcscat(data, NEW_PATH);
    myStruct.structFirst = data;
    FUN0(myStruct);
}
typedef struct _CWE427_Uncontrolled_Search_Path_Element__wchar_t_console_67_structType
{
    wchar_t * structFirst;
} CWE427_Uncontrolled_Search_Path_Element__wchar_t_console_67_structType;
void FUN0(CWE427_Uncontrolled_Search_Path_Element__wchar_t_console_67_structType myStruct)
{
    wchar_t * data = myStruct.structFirst;
    PUTENV(data);
}
