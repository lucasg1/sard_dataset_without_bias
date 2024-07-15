typedef struct _CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_67_structType
{
    FILE * structFirst;
} CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_67_structType;
void FUN0(CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_67_structType myStruct);
void FUN1()
{
    FILE * data;
    CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_67_structType myStruct;
    data = NULL;
    data = fopen("BadSource_fopen.txt", "w+");
    myStruct.structFirst = data;
    FUN0(myStruct);
}
typedef struct _CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_67_structType
{
    FILE * structFirst;
} CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_67_structType;
void FUN0(CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_67_structType myStruct)
{
    FILE * data = myStruct.structFirst;
    if (data != NULL)
    {
        fclose(data);
    }
    data = fopen("GoodSink_fopen.txt", "w+");
    if (data != NULL)
    {
        fclose(data);
    }
}
