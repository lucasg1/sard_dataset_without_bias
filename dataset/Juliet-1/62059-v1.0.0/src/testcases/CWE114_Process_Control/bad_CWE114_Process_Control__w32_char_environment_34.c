typedef union
{
    char * unionFirst;
    char * unionSecond;
} CWE114_Process_Control__w32_char_environment_34_unionType;
void FUN0()
{
    char * data;
    CWE114_Process_Control__w32_char_environment_34_unionType myUnion;
    char dataBuffer[100] = "";
    data = dataBuffer;
    {
        size_t dataLen = strlen(data);
        char * environment = GETENV(ENV_VARIABLE);
        if (environment != NULL)
        {
            strncat(data+dataLen, environment, 100-dataLen-1);
        }
    }
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
