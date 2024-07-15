void FUN0()
{
    wchar_t * data;
    wchar_t dataBuffer[100] = L"";
    data = dataBuffer;
    wcscpy(data, L"winsrv.dll");
    {
        wchar_t * dataCopy = data;
        wchar_t * data = dataCopy;
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
