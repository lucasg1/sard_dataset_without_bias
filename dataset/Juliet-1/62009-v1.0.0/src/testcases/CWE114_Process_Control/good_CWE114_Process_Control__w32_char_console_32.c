void FUN0()
{
    char * data;
    char * *dataPtr1 = &data;
    char * *dataPtr2 = &data;
    char dataBuffer[100] = "";
    data = dataBuffer;
    {
        char * data = *dataPtr1;
        strcpy(data, "C:\\Windows\\System32\\winsrv.dll");
        *dataPtr1 = data;
    }
    {
        char * data = *dataPtr2;
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
