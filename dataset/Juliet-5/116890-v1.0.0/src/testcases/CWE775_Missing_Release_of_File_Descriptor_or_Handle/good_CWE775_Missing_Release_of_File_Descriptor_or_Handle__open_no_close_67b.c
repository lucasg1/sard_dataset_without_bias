typedef struct _CWE775_Missing_Release_of_File_Descriptor_or_Handle__open_no_close_67_structType
{
    int structFirst;
} CWE775_Missing_Release_of_File_Descriptor_or_Handle__open_no_close_67_structType;
void FUN0(CWE775_Missing_Release_of_File_Descriptor_or_Handle__open_no_close_67_structType myStruct);
void FUN1()
{
    int data;
    CWE775_Missing_Release_of_File_Descriptor_or_Handle__open_no_close_67_structType myStruct;
    data = -1;
    data = OPEN("BadSource_open.txt", O_RDWR|O_CREAT, S_IREAD|S_IWRITE);
    myStruct.structFirst = data;
    FUN0(myStruct);
}
typedef struct _CWE775_Missing_Release_of_File_Descriptor_or_Handle__open_no_close_67_structType
{
    int structFirst;
} CWE775_Missing_Release_of_File_Descriptor_or_Handle__open_no_close_67_structType;
void FUN0(CWE775_Missing_Release_of_File_Descriptor_or_Handle__open_no_close_67_structType myStruct)
{
    int data = myStruct.structFirst;
    if (data != -1)
    {
        CLOSE(data);
    }
}
