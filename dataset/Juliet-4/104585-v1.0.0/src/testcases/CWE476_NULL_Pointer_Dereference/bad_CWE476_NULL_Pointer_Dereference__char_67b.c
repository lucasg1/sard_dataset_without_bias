typedef struct _CWE476_NULL_Pointer_Dereference__char_67_structType
{
    char * structFirst;
} CWE476_NULL_Pointer_Dereference__char_67_structType;
void FUN0(CWE476_NULL_Pointer_Dereference__char_67_structType myStruct);
void FUN1()
{
    char * data;
    CWE476_NULL_Pointer_Dereference__char_67_structType myStruct;
    data = NULL;
    myStruct.structFirst = data;
    FUN0(myStruct);
}
typedef struct _CWE476_NULL_Pointer_Dereference__char_67_structType
{
    char * structFirst;
} CWE476_NULL_Pointer_Dereference__char_67_structType;
void FUN0(CWE476_NULL_Pointer_Dereference__char_67_structType myStruct)
{
    char * data = myStruct.structFirst;
<START>
    printHexCharLine(data[0]);
<END>
}
