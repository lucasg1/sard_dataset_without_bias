typedef struct _CWE114_Process_Control__w32_wchar_t_environment_67_structType
{
    wchar_t * structFirst;
} CWE114_Process_Control__w32_wchar_t_environment_67_structType;
void FUN0(CWE114_Process_Control__w32_wchar_t_environment_67_structType myStruct);
void FUN1()
{
    wchar_t * data;
    CWE114_Process_Control__w32_wchar_t_environment_67_structType myStruct;
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
    FUN0(myStruct);
}
typedef struct _CWE114_Process_Control__w32_wchar_t_environment_67_structType
{
    wchar_t * structFirst;
} CWE114_Process_Control__w32_wchar_t_environment_67_structType;
void FUN0(CWE114_Process_Control__w32_wchar_t_environment_67_structType myStruct)
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
