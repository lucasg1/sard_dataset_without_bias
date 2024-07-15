typedef struct _CWE114_Process_Control__w32_wchar_t_console_67_structType
{
    wchar_t * structFirst;
} CWE114_Process_Control__w32_wchar_t_console_67_structType;
void FUN0(CWE114_Process_Control__w32_wchar_t_console_67_structType myStruct);
void FUN1()
{
    wchar_t * data;
    CWE114_Process_Control__w32_wchar_t_console_67_structType myStruct;
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
typedef struct _CWE114_Process_Control__w32_wchar_t_console_67_structType
{
    wchar_t * structFirst;
} CWE114_Process_Control__w32_wchar_t_console_67_structType;
void FUN0(CWE114_Process_Control__w32_wchar_t_console_67_structType myStruct)
{
    wchar_t * data = myStruct.structFirst;
    {
        HMODULE hModule;
<START>
        hModule = LoadLibraryW(data);
<END>
        if (hModule != NULL)
        {
            FreeLibrary(hModule);
            printLine("Library loaded and freed successfully");
        }
        else
        {
            printLine("Unable to load library");
        }
    }
}
