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
    {
        size_t dataLen = wcslen(data);
        if (250-dataLen > 1)
        {
            if (fgetws(data+dataLen, (int)(250-dataLen), stdin) != NULL)
            {
                dataLen = wcslen(data);
                if (dataLen > 0 && data[dataLen-1] == L'\n')
                {
                    data[dataLen-1] = L'\0';
                }
            }
            else
            {
                printLine("fgetws() failed");
                data[dataLen] = L'\0';
            }
        }
    }
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
<START>
    PUTENV(data);
<END>
}
