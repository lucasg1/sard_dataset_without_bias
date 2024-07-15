typedef struct _CWE476_NULL_Pointer_Dereference__wchar_t_67_structType
{
    wchar_t * structFirst;
} CWE476_NULL_Pointer_Dereference__wchar_t_67_structType;
void FUN0(CWE476_NULL_Pointer_Dereference__wchar_t_67_structType myStruct);
void FUN1()
{
    wchar_t * data;
    CWE476_NULL_Pointer_Dereference__wchar_t_67_structType myStruct;
    data = NULL;
    myStruct.structFirst = data;
    FUN0(myStruct);
}
typedef struct _CWE476_NULL_Pointer_Dereference__wchar_t_67_structType
{
    wchar_t * structFirst;
} CWE476_NULL_Pointer_Dereference__wchar_t_67_structType;
void FUN0(CWE476_NULL_Pointer_Dereference__wchar_t_67_structType myStruct)
{
    wchar_t * data = myStruct.structFirst;
<START>
    printWcharLine(data[0]);
<END>
}
