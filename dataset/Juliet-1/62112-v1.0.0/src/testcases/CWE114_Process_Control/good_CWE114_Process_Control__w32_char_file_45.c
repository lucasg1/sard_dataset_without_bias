static char * VAR0;
static char * VAR1;
void FUN0()
{
    char * data = VAR1;
    {
        HMODULE hModule;
        hModule = LoadLibraryA(data);
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
    strcpy(data, "C:\\Windows\\System32\\winsrv.dll");
    VAR1 = data;
    FUN0();
}
