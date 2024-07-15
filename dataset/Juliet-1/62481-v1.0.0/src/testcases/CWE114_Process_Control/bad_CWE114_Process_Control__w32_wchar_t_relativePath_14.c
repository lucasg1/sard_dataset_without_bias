void FUN0()
{
    wchar_t * data;
    wchar_t dataBuffer[100] = L"";
    data = dataBuffer;
    if(globalFive==5)
    {
        wcscpy(data, L"winsrv.dll");
    }
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
