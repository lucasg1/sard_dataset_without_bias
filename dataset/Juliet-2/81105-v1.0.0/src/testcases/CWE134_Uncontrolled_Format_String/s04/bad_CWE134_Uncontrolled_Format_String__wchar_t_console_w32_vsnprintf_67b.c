typedef struct _CWE134_Uncontrolled_Format_String__wchar_t_console_w32_vsnprintf_67_structType
{
    wchar_t * structFirst;
} CWE134_Uncontrolled_Format_String__wchar_t_console_w32_vsnprintf_67_structType;
void FUN0(CWE134_Uncontrolled_Format_String__wchar_t_console_w32_vsnprintf_67_structType myStruct);
void FUN1()
{
    wchar_t * data;
    CWE134_Uncontrolled_Format_String__wchar_t_console_w32_vsnprintf_67_structType myStruct;
    wchar_t dataBuffer[100] = L"";
    data = dataBuffer;
    {
        size_t dataLen = wcslen(data);
        if (100-dataLen > 1)
        {
            if (fgetws(data+dataLen, (int)(100-dataLen), stdin) != NULL)
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
typedef struct _CWE134_Uncontrolled_Format_String__wchar_t_console_w32_vsnprintf_67_structType
{
    wchar_t * structFirst;
} CWE134_Uncontrolled_Format_String__wchar_t_console_w32_vsnprintf_67_structType;
void FUN2(wchar_t * data, ...)
{
    {
        wchar_t dest[100] = L"";
        va_list args;
        va_start(args, data);
<START>
        _vsnwprintf(dest, 100-1, data, args);
<END>
        va_end(args);
        printWLine(dest);
    }
}
void FUN0(CWE134_Uncontrolled_Format_String__wchar_t_console_w32_vsnprintf_67_structType myStruct)
{
    wchar_t * data = myStruct.structFirst;
    FUN2(data, data);
}