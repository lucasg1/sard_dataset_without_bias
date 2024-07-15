typedef struct _CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__w32CreateFile_67_structType
{
    HANDLE structFirst;
} CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__w32CreateFile_67_structType;
void FUN0(CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__w32CreateFile_67_structType myStruct);
void FUN1()
{
    HANDLE data;
    CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__w32CreateFile_67_structType myStruct;
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
typedef struct _CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__w32CreateFile_67_structType
{
    HANDLE structFirst;
} CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__w32CreateFile_67_structType;
void FUN0(CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__w32CreateFile_67_structType myStruct)
{
    HANDLE data = myStruct.structFirst;
    if (data != INVALID_HANDLE_VALUE)
    {
        CloseHandle(data);
    }
    data = CreateFile("GoodSink_w32CreateFile.txt",
                      (GENERIC_WRITE|GENERIC_READ),
                      0,
                      NULL,
                      OPEN_ALWAYS,
                      FILE_ATTRIBUTE_NORMAL,
                      NULL);
    if (data != INVALID_HANDLE_VALUE)
    {
        CloseHandle(data);
    }
}
