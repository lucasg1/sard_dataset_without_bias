typedef union
{
    char * unionFirst;
    char * unionSecond;
} CWE114_Process_Control__w32_char_relativePath_34_unionType;
void FUN0()
{
    char * data;
    CWE114_Process_Control__w32_char_relativePath_34_unionType myUnion;
    char dataBuffer[100] = "";
    data = dataBuffer;
    strcpy(data, "winsrv.dll");
    myUnion.unionFirst = data;
    {
        char * data = myUnion.unionSecond;
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
}
