typedef struct _CWE675_Duplicate_Operations_on_Resource__w32CreateFile_67_structType
{
    HANDLE structFirst;
} CWE675_Duplicate_Operations_on_Resource__w32CreateFile_67_structType;
void FUN0(CWE675_Duplicate_Operations_on_Resource__w32CreateFile_67_structType myStruct);
void FUN1()
{
    HANDLE data;
    CWE675_Duplicate_Operations_on_Resource__w32CreateFile_67_structType myStruct;
    data = INVALID_HANDLE_VALUE; 
    data = CreateFile("BadSource_w32CreateFile.txt",
                      (GENERIC_WRITE|GENERIC_READ),
                      0,
                      NULL,
                      OPEN_ALWAYS,
                      FILE_ATTRIBUTE_NORMAL,
                      NULL);
    CloseHandle(data);
    myStruct.structFirst = data;
    FUN0(myStruct);
}
typedef struct _CWE675_Duplicate_Operations_on_Resource__w32CreateFile_67_structType
{
    HANDLE structFirst;
} CWE675_Duplicate_Operations_on_Resource__w32CreateFile_67_structType;
void FUN0(CWE675_Duplicate_Operations_on_Resource__w32CreateFile_67_structType myStruct)
{
    HANDLE data = myStruct.structFirst;
<START>
    CloseHandle(data);
<END>
}
