void FUN0()
{
    char * data;
    char dataBuffer[100] = "";
    data = dataBuffer;
    if(globalFive==5)
    {
        strcpy(data, "winsrv.dll");
    }
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
