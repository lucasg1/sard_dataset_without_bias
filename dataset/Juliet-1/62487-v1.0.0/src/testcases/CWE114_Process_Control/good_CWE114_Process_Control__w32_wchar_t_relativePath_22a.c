extern int VAR0;
extern int VAR1;
wchar_t * FUN0(wchar_t * data)
{
    if(VAR0)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        wcscpy(data, L"C:\\Windows\\System32\\winsrv.dll");
    }
    return data;
}
wchar_t * FUN1(wchar_t * data)
{
    if(VAR1)
    {
        wcscpy(data, L"C:\\Windows\\System32\\winsrv.dll");
    }
    return data;
}
int VAR0 = 0;
int VAR1 = 0;
wchar_t * FUN0(wchar_t * data);
void FUN3()
{
    wchar_t * data;
    wchar_t dataBuffer[100] = L"";
    data = dataBuffer;
    VAR0 = 0; 
    data = FUN0(data);
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
wchar_t * FUN1(wchar_t * data);
void FUN5()
{
    wchar_t * data;
    wchar_t dataBuffer[100] = L"";
    data = dataBuffer;
    VAR1 = 1; 
    data = FUN1(data);
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
