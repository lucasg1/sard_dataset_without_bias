typedef struct _CWE404_Improper_Resource_Shutdown__freopen_w32_close_67_structType
{
    FILE * structFirst;
} CWE404_Improper_Resource_Shutdown__freopen_w32_close_67_structType;
void FUN0(CWE404_Improper_Resource_Shutdown__freopen_w32_close_67_structType myStruct);
void FUN1()
{
    FILE * data;
    CWE404_Improper_Resource_Shutdown__freopen_w32_close_67_structType myStruct;
    data = NULL;
    data = freopen("BadSource_freopen.txt","w+",stdin);
    myStruct.structFirst = data;
    FUN0(myStruct);
}
typedef struct _CWE404_Improper_Resource_Shutdown__freopen_w32_close_67_structType
{
    FILE * structFirst;
} CWE404_Improper_Resource_Shutdown__freopen_w32_close_67_structType;
void FUN0(CWE404_Improper_Resource_Shutdown__freopen_w32_close_67_structType myStruct)
{
    FILE * data = myStruct.structFirst;
    if (data != NULL)
    {
        fclose(data);
    }
}
