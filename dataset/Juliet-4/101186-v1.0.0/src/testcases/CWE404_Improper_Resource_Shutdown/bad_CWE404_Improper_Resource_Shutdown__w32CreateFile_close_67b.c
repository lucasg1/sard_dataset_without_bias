typedef struct _CWE404_Improper_Resource_Shutdown__w32CreateFile_close_67_structType
{
    HANDLE structFirst;
} CWE404_Improper_Resource_Shutdown__w32CreateFile_close_67_structType;
void FUN0(CWE404_Improper_Resource_Shutdown__w32CreateFile_close_67_structType myStruct);
void FUN1()
{
    HANDLE data;
    CWE404_Improper_Resource_Shutdown__w32CreateFile_close_67_structType myStruct;
    data = INVALID_HANDLE_VALUE;
    data = CreateFile("BadSource_w32CreateFile.txt",
                      (GENERIC_WRITE|GENERIC_READ),
                      0,
                      NULL,
                      OPEN_ALWAYS,
                      FILE_ATTRIBUTE_NORMAL,
                      NULL);
    myStruct.structFirst = data;
    FUN0(myStruct);
}
typedef struct _CWE404_Improper_Resource_Shutdown__w32CreateFile_close_67_structType
{
    HANDLE structFirst;
} CWE404_Improper_Resource_Shutdown__w32CreateFile_close_67_structType;
void FUN0(CWE404_Improper_Resource_Shutdown__w32CreateFile_close_67_structType myStruct)
{
    HANDLE data = myStruct.structFirst;
    if (data != INVALID_HANDLE_VALUE)
    {
<START>
        _close((int)data);
<END>
    }
}
