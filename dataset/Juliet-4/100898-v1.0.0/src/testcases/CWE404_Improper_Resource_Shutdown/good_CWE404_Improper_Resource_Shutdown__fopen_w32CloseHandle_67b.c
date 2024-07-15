typedef struct _CWE404_Improper_Resource_Shutdown__fopen_w32CloseHandle_67_structType
{
    FILE * structFirst;
} CWE404_Improper_Resource_Shutdown__fopen_w32CloseHandle_67_structType;
void FUN0(CWE404_Improper_Resource_Shutdown__fopen_w32CloseHandle_67_structType myStruct);
void FUN1()
{
    FILE * data;
    CWE404_Improper_Resource_Shutdown__fopen_w32CloseHandle_67_structType myStruct;
    data = NULL;
    data = fopen("BadSource_fopen.txt", "w+");
    myStruct.structFirst = data;
    FUN0(myStruct);
}
typedef struct _CWE404_Improper_Resource_Shutdown__fopen_w32CloseHandle_67_structType
{
    FILE * structFirst;
} CWE404_Improper_Resource_Shutdown__fopen_w32CloseHandle_67_structType;
void FUN0(CWE404_Improper_Resource_Shutdown__fopen_w32CloseHandle_67_structType myStruct)
{
    FILE * data = myStruct.structFirst;
    if (data != NULL)
    {
        fclose(data);
    }
}
