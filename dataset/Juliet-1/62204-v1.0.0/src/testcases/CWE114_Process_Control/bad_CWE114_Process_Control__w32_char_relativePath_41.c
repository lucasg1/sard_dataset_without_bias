void FUN0(char * data)
{
    {
        HMODULE hModule;
<START>
        hModule = LoadLibraryA(data);
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
    char * data;
    char dataBuffer[100] = "";
    data = dataBuffer;
    strcpy(data, "winsrv.dll");
    FUN0(data);
}
