typedef struct _CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_67_structType
{
    int structFirst;
} CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_67_structType;
void FUN0(CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_67_structType myStruct);
void FUN1()
{
    int data;
    CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_67_structType myStruct;
    data = -1;
    data = OPEN("BadSource_open.txt", O_RDWR|O_CREAT, S_IREAD|S_IWRITE);
    myStruct.structFirst = data;
    FUN0(myStruct);
}
typedef struct _CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_67_structType
{
    int structFirst;
} CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_67_structType;
void FUN0(CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_67_structType myStruct)
{
    int data = myStruct.structFirst;
<START>
    data = OPEN("BadSink_open.txt", O_RDWR|O_CREAT, S_IREAD|S_IWRITE);
<END>
    if (data != -1)
    {
        CLOSE(data);
    }
}
