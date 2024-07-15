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
    data = fopen("GoodSource_fopen.txt", "w+");
    myStruct.structFirst = data;
    FUN0(myStruct);
}
void FUN2(CWE675_Duplicate_Operations_on_Resource__fopen_67_structType myStruct);
void FUN3()
{
    FILE * data;
    CWE675_Duplicate_Operations_on_Resource__fopen_67_structType myStruct;
    data = NULL; 
    data = fopen("BadSource_fopen.txt", "w+");
    fclose(data);
    myStruct.structFirst = data;
    FUN2(myStruct);
}
typedef struct _CWE675_Duplicate_Operations_on_Resource__fopen_67_structType
{
    FILE * structFirst;
} CWE675_Duplicate_Operations_on_Resource__fopen_67_structType;
void FUN0(CWE675_Duplicate_Operations_on_Resource__fopen_67_structType myStruct)
{
    FILE * data = myStruct.structFirst;
    fclose(data);
}
void FUN2(CWE675_Duplicate_Operations_on_Resource__fopen_67_structType myStruct)
{
    FILE * data = myStruct.structFirst;
    ; 
}
