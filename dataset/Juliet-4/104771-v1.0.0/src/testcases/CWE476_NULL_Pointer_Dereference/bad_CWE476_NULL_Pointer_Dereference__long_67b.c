typedef struct _CWE476_NULL_Pointer_Dereference__long_67_structType
{
    long * structFirst;
} CWE476_NULL_Pointer_Dereference__long_67_structType;
void FUN0(CWE476_NULL_Pointer_Dereference__long_67_structType myStruct);
void FUN1()
{
    long * data;
    CWE476_NULL_Pointer_Dereference__long_67_structType myStruct;
    data = NULL;
    myStruct.structFirst = data;
    FUN0(myStruct);
}
typedef struct _CWE476_NULL_Pointer_Dereference__long_67_structType
{
    long * structFirst;
} CWE476_NULL_Pointer_Dereference__long_67_structType;
void FUN0(CWE476_NULL_Pointer_Dereference__long_67_structType myStruct)
{
    long * data = myStruct.structFirst;
<START>
    printLongLine(*data);
<END>
}
