void FUN0(wchar_t * data);
void FUN1()
{
    wchar_t * data;
    wchar_t dataBuffer[100] = L"";
    data = dataBuffer;
    wcscpy(data, L"C:\\Windows\\System32\\winsrv.dll");
    FUN0(data);
}
void FUN3(wchar_t * data);
void FUN4(wchar_t * data)
{
    FUN3(data);
}
void FUN4(wchar_t * data);
void FUN6(wchar_t * data)
{
    FUN4(data);
}
void FUN6(wchar_t * data);
void FUN0(wchar_t * data)
{
    FUN6(data);
}
void FUN3(wchar_t * data)
{
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
