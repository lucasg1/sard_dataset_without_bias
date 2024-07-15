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
    strcpy(data, "C:\\Windows\\System32\\winsrv.dll");
    myUnion.unionFirst = data;
    {
        char * data = myUnion.unionSecond;
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
}
