typedef struct _CWE775_Missing_Release_of_File_Descriptor_or_Handle__fopen_no_close_67_structType
{
    FILE * structFirst;
} CWE775_Missing_Release_of_File_Descriptor_or_Handle__fopen_no_close_67_structType;
void FUN0(CWE775_Missing_Release_of_File_Descriptor_or_Handle__fopen_no_close_67_structType myStruct);
void FUN1()
{
    FILE * data;
    CWE775_Missing_Release_of_File_Descriptor_or_Handle__fopen_no_close_67_structType myStruct;
    data = NULL;
    data = fopen("BadSource_fopen.txt", "w+");
    myStruct.structFirst = data;
    FUN0(myStruct);
}
typedef struct _CWE775_Missing_Release_of_File_Descriptor_or_Handle__fopen_no_close_67_structType
{
    FILE * structFirst;
} CWE775_Missing_Release_of_File_Descriptor_or_Handle__fopen_no_close_67_structType;
void FUN0(CWE775_Missing_Release_of_File_Descriptor_or_Handle__fopen_no_close_67_structType myStruct)
{
    FILE * data = myStruct.structFirst;
<START>
<END>
    ; 
}
