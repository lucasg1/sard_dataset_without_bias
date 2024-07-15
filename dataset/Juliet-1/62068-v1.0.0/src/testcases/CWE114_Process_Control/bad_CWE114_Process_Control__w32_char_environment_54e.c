void FUN0(char * data);
void FUN1(char * data)
{
    FUN0(data);
}
void FUN2(char * data);
void FUN3(char * data)
{
    FUN2(data);
}
void FUN3(char * data);
void FUN5()
{
    char * data;
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
    FUN3(data);
}
void FUN1(char * data);
void FUN2(char * data)
{
    FUN1(data);
}
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
