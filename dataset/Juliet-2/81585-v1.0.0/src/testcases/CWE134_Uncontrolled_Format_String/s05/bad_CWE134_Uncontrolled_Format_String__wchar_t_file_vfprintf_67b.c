typedef struct _CWE134_Uncontrolled_Format_String__wchar_t_file_vfprintf_67_structType
{
    wchar_t * structFirst;
} CWE134_Uncontrolled_Format_String__wchar_t_file_vfprintf_67_structType;
void FUN0(CWE134_Uncontrolled_Format_String__wchar_t_file_vfprintf_67_structType myStruct);
void FUN1()
{
    wchar_t * data;
    CWE134_Uncontrolled_Format_String__wchar_t_file_vfprintf_67_structType myStruct;
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
    FUN0(myStruct);
}
typedef struct _CWE134_Uncontrolled_Format_String__wchar_t_file_vfprintf_67_structType
{
    wchar_t * structFirst;
} CWE134_Uncontrolled_Format_String__wchar_t_file_vfprintf_67_structType;
void FUN2(wchar_t * data, ...)
{
    {
        va_list args;
        va_start(args, data);
<START>
        vfwprintf(stdout, data, args);
<END>
        va_end(args);
    }
}
void FUN0(CWE134_Uncontrolled_Format_String__wchar_t_file_vfprintf_67_structType myStruct)
{
    wchar_t * data = myStruct.structFirst;
    FUN2(data, data);
}
