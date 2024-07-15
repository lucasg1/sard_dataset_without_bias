typedef struct _CWE675_Duplicate_Operations_on_Resource__freopen_67_structType
{
    FILE * structFirst;
} CWE675_Duplicate_Operations_on_Resource__freopen_67_structType;
void FUN0(CWE675_Duplicate_Operations_on_Resource__freopen_67_structType myStruct);
void FUN1()
{
    FILE * data;
    CWE675_Duplicate_Operations_on_Resource__freopen_67_structType myStruct;
    data = NULL; 
    data = freopen("BadSource_freopen.txt","w+",stdin);
    fclose(data);
    myStruct.structFirst = data;
    FUN0(myStruct);
}
typedef struct _CWE675_Duplicate_Operations_on_Resource__freopen_67_structType
{
    FILE * structFirst;
} CWE675_Duplicate_Operations_on_Resource__freopen_67_structType;
void FUN0(CWE675_Duplicate_Operations_on_Resource__freopen_67_structType myStruct)
{
    FILE * data = myStruct.structFirst;
<START>
    fclose(data);
<END>
}
