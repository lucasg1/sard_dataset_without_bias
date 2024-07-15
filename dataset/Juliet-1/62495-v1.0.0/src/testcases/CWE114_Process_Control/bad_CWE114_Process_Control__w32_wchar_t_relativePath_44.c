void FUN0(wchar_t * data)
{
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
void FUN1()
{
    wchar_t * data;
    void (*funcPtr) (wchar_t *) = FUN0;
    wchar_t dataBuffer[100] = L"";
    data = dataBuffer;
    wcscpy(data, L"winsrv.dll");
    funcPtr(data);
}
