typedef struct _CWE476_NULL_Pointer_Dereference__int_67_structType
{
    int * structFirst;
} CWE476_NULL_Pointer_Dereference__int_67_structType;
void FUN0(CWE476_NULL_Pointer_Dereference__int_67_structType myStruct);
void FUN1()
{
    int * data;
    CWE476_NULL_Pointer_Dereference__int_67_structType myStruct;
    data = NULL;
    myStruct.structFirst = data;
    FUN0(myStruct);
}
typedef struct _CWE476_NULL_Pointer_Dereference__int_67_structType
{
    int * structFirst;
} CWE476_NULL_Pointer_Dereference__int_67_structType;
void FUN0(CWE476_NULL_Pointer_Dereference__int_67_structType myStruct)
{
    int * data = myStruct.structFirst;
<START>
    printIntLine(*data);
<END>
}
