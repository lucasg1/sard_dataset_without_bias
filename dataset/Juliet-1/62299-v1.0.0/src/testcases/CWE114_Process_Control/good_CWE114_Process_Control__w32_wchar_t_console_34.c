typedef union
{
    wchar_t * unionFirst;
    wchar_t * unionSecond;
} CWE114_Process_Control__w32_wchar_t_console_34_unionType;
void FUN0()
{
    wchar_t * data;
    CWE114_Process_Control__w32_wchar_t_console_34_unionType myUnion;
    wchar_t dataBuffer[100] = L"";
    data = dataBuffer;
    wcscpy(data, L"C:\\Windows\\System32\\winsrv.dll");
    myUnion.unionFirst = data;
    {
        wchar_t * data = myUnion.unionSecond;
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
}
