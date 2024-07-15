typedef struct _CWE675_Duplicate_Operations_on_Resource__fopen_67_structType
{
    FILE * structFirst;
} CWE675_Duplicate_Operations_on_Resource__fopen_67_structType;
void FUN0(CWE675_Duplicate_Operations_on_Resource__fopen_67_structType myStruct);
void FUN1()
{
    FILE * data;
    CWE675_Duplicate_Operations_on_Resource__fopen_67_structType myStruct;
    data = NULL; 
    data = fopen("BadSource_fopen.txt", "w+");
    fclose(data);
    myStruct.structFirst = data;
    FUN0(myStruct);
}
typedef struct _CWE675_Duplicate_Operations_on_Resource__fopen_67_structType
{
    FILE * structFirst;
} CWE675_Duplicate_Operations_on_Resource__fopen_67_structType;
void FUN0(CWE675_Duplicate_Operations_on_Resource__fopen_67_structType myStruct)
{
    FILE * data = myStruct.structFirst;
<START>
    fclose(data);
<END>
}
