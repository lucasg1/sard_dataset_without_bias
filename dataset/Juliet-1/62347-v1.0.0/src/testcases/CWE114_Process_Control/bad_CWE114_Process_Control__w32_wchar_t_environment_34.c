typedef union
{
    wchar_t * unionFirst;
    wchar_t * unionSecond;
} CWE114_Process_Control__w32_wchar_t_environment_34_unionType;
void FUN0()
{
    wchar_t * data;
    CWE114_Process_Control__w32_wchar_t_environment_34_unionType myUnion;
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
    myUnion.unionFirst = data;
    {
        wchar_t * data = myUnion.unionSecond;
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
}
