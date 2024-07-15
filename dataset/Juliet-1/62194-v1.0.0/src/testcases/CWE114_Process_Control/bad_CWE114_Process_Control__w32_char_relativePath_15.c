void FUN0()
{
    char * data;
    char dataBuffer[100] = "";
    data = dataBuffer;
    switch(6)
    {
    case 6:
        strcpy(data, "winsrv.dll");
        break;
    default:
        printLine("Benign, fixed string");
        break;
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
