typedef struct _CWE114_Process_Control__w32_char_relativePath_67_structType
{
    char * structFirst;
} CWE114_Process_Control__w32_char_relativePath_67_structType;
void FUN0(CWE114_Process_Control__w32_char_relativePath_67_structType myStruct);
void FUN1()
{
    char * data;
    CWE114_Process_Control__w32_char_relativePath_67_structType myStruct;
    char dataBuffer[100] = "";
    data = dataBuffer;
    strcpy(data, "winsrv.dll");
    myStruct.structFirst = data;
    FUN0(myStruct);
}
typedef struct _CWE114_Process_Control__w32_char_relativePath_67_structType
{
    char * structFirst;
} CWE114_Process_Control__w32_char_relativePath_67_structType;
void FUN0(CWE114_Process_Control__w32_char_relativePath_67_structType myStruct)
{
    char * data = myStruct.structFirst;
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
