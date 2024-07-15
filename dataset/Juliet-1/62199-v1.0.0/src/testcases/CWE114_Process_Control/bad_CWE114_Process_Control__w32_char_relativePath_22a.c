extern int VAR0;
char * FUN0(char * data)
{
    if(VAR0)
    {
        strcpy(data, "winsrv.dll");
    }
    return data;
}
int VAR0 = 0;
char * FUN0(char * data);
void FUN2()
{
    char * data;
    char dataBuffer[100] = "";
    data = dataBuffer;
    VAR0 = 1; 
    data = FUN0(data);
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
