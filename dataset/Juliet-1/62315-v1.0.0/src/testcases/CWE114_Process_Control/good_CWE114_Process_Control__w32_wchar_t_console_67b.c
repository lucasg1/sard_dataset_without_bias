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
    wcscpy(data, L"C:\\Windows\\System32\\winsrv.dll");
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
        hModule = LoadLibraryW(data);
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
