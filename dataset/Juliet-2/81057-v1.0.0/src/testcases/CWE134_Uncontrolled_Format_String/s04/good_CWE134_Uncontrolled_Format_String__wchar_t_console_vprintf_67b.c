typedef struct _CWE134_Uncontrolled_Format_String__wchar_t_console_vprintf_67_structType
{
    wchar_t * structFirst;
} CWE134_Uncontrolled_Format_String__wchar_t_console_vprintf_67_structType;
void FUN0(CWE134_Uncontrolled_Format_String__wchar_t_console_vprintf_67_structType myStruct);
void FUN1()
{
    wchar_t * data;
    CWE134_Uncontrolled_Format_String__wchar_t_console_vprintf_67_structType myStruct;
    wchar_t dataBuffer[100] = L"";
    data = dataBuffer;
    wcscpy(data, L"fixedstringtest");
    myStruct.structFirst = data;
    FUN0(myStruct);
}
void FUN2(CWE134_Uncontrolled_Format_String__wchar_t_console_vprintf_67_structType myStruct);
void FUN3()
{
    wchar_t * data;
    CWE134_Uncontrolled_Format_String__wchar_t_console_vprintf_67_structType myStruct;
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
    FUN2(myStruct);
}
typedef struct _CWE134_Uncontrolled_Format_String__wchar_t_console_vprintf_67_structType
{
    wchar_t * structFirst;
} CWE134_Uncontrolled_Format_String__wchar_t_console_vprintf_67_structType;
void FUN5(wchar_t * data, ...)
{
    {
        va_list args;
        va_start(args, data);
        vwprintf(data, args);
        va_end(args);
    }
}
void FUN0(CWE134_Uncontrolled_Format_String__wchar_t_console_vprintf_67_structType myStruct)
{
    wchar_t * data = myStruct.structFirst;
    FUN5(data, data);
}
void FUN7(wchar_t * data, ...)
{
    {
        va_list args;
        va_start(args, data);
        vwprintf(L"%s", args);
        va_end(args);
    }
}
void FUN2(CWE134_Uncontrolled_Format_String__wchar_t_console_vprintf_67_structType myStruct)
{
    wchar_t * data = myStruct.structFirst;
    FUN7(data, data);
}
