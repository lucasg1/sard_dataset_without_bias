typedef struct _CWE404_Improper_Resource_Shutdown__open_w32CloseHandle_67_structType
{
    int structFirst;
} CWE404_Improper_Resource_Shutdown__open_w32CloseHandle_67_structType;
void FUN0(CWE404_Improper_Resource_Shutdown__open_w32CloseHandle_67_structType myStruct);
void FUN1()
{
    int data;
    CWE404_Improper_Resource_Shutdown__open_w32CloseHandle_67_structType myStruct;
    data = -1;
    data = OPEN("BadSource_open.txt", O_RDWR|O_CREAT, S_IREAD|S_IWRITE);
    myStruct.structFirst = data;
    FUN0(myStruct);
}
typedef struct _CWE404_Improper_Resource_Shutdown__open_w32CloseHandle_67_structType
{
    int structFirst;
} CWE404_Improper_Resource_Shutdown__open_w32CloseHandle_67_structType;
void FUN0(CWE404_Improper_Resource_Shutdown__open_w32CloseHandle_67_structType myStruct)
{
    int data = myStruct.structFirst;
    if (data != -1)
    {
        CLOSE(data);
    }
}
