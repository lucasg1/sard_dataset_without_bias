typedef struct _CWE675_Duplicate_Operations_on_Resource__open_67_structType
{
    int structFirst;
} CWE675_Duplicate_Operations_on_Resource__open_67_structType;
void FUN0(CWE675_Duplicate_Operations_on_Resource__open_67_structType myStruct);
void FUN1()
{
    int data;
    CWE675_Duplicate_Operations_on_Resource__open_67_structType myStruct;
    data = -1; 
    data = OPEN("BadSource_open.txt", O_RDWR|O_CREAT, S_IREAD|S_IWRITE);
    CLOSE(data);
    myStruct.structFirst = data;
    FUN0(myStruct);
}
typedef struct _CWE675_Duplicate_Operations_on_Resource__open_67_structType
{
    int structFirst;
} CWE675_Duplicate_Operations_on_Resource__open_67_structType;
void FUN0(CWE675_Duplicate_Operations_on_Resource__open_67_structType myStruct)
{
    int data = myStruct.structFirst;
<START>
    CLOSE(data);
<END>
}
