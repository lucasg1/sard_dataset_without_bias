typedef struct _CWE134_Uncontrolled_Format_String__wchar_t_file_w32_vsnprintf_67_structType
{
    wchar_t * structFirst;
} CWE134_Uncontrolled_Format_String__wchar_t_file_w32_vsnprintf_67_structType;
void FUN0(CWE134_Uncontrolled_Format_String__wchar_t_file_w32_vsnprintf_67_structType myStruct);
void FUN1()
{
    wchar_t * data;
    CWE134_Uncontrolled_Format_String__wchar_t_file_w32_vsnprintf_67_structType myStruct;
    wchar_t dataBuffer[100] = L"";
    data = dataBuffer;
    wcscpy(data, L"fixedstringtest");
    myStruct.structFirst = data;
    FUN0(myStruct);
}
void FUN2(CWE134_Uncontrolled_Format_String__wchar_t_file_w32_vsnprintf_67_structType myStruct);
void FUN3()
{
    wchar_t * data;
    CWE134_Uncontrolled_Format_String__wchar_t_file_w32_vsnprintf_67_structType myStruct;
    wchar_t dataBuffer[100] = L"";
    data = dataBuffer;
    {
        size_t dataLen = wcslen(data);
        FILE * pFile;
        if (100-dataLen > 1)
        {
            pFile = fopen(FILENAME, "r");
            if (pFile != NULL)
            {
                if (fgetws(data+dataLen, (int)(100-dataLen), pFile) == NULL)
                {
                    printLine("fgetws() failed");
                    data[dataLen] = L'\0';
                }
                fclose(pFile);
            }
        }
    }
    myStruct.structFirst = data;
    FUN2(myStruct);
}
typedef struct _CWE134_Uncontrolled_Format_String__wchar_t_file_w32_vsnprintf_67_structType
{
    wchar_t * structFirst;
} CWE134_Uncontrolled_Format_String__wchar_t_file_w32_vsnprintf_67_structType;
void FUN5(wchar_t * data, ...)
{
    {
        wchar_t dest[100] = L"";
        va_list args;
        va_start(args, data);
        _vsnwprintf(dest, 100-1, data, args);
        va_end(args);
        printWLine(dest);
    }
}
void FUN0(CWE134_Uncontrolled_Format_String__wchar_t_file_w32_vsnprintf_67_structType myStruct)
{
    wchar_t * data = myStruct.structFirst;
    FUN5(data, data);
}
void FUN7(wchar_t * data, ...)
{
    {
        wchar_t dest[100] = L"";
        va_list args;
        va_start(args, data);
        _vsnwprintf(dest, 100-1, L"%s", args);
        va_end(args);
        printWLine(dest);
    }
}
void FUN2(CWE134_Uncontrolled_Format_String__wchar_t_file_w32_vsnprintf_67_structType myStruct)
{
    wchar_t * data = myStruct.structFirst;
    FUN7(data, data);
}
