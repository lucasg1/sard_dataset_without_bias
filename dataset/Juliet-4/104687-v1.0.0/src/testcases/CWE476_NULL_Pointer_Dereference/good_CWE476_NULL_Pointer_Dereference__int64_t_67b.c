typedef struct _CWE476_NULL_Pointer_Dereference__int64_t_67_structType
{
    int64_t * structFirst;
} CWE476_NULL_Pointer_Dereference__int64_t_67_structType;
void FUN0(CWE476_NULL_Pointer_Dereference__int64_t_67_structType myStruct);
void FUN1()
{
    int64_t * data;
    CWE476_NULL_Pointer_Dereference__int64_t_67_structType myStruct;
    {
        int64_t tmpData = 5LL;
        data = &tmpData;
    }
    myStruct.structFirst = data;
    FUN0(myStruct);
}
void FUN2(CWE476_NULL_Pointer_Dereference__int64_t_67_structType myStruct);
void FUN3()
{
    int64_t * data;
    CWE476_NULL_Pointer_Dereference__int64_t_67_structType myStruct;
    data = NULL;
    myStruct.structFirst = data;
    FUN2(myStruct);
}
typedef struct _CWE476_NULL_Pointer_Dereference__int64_t_67_structType
{
    int64_t * structFirst;
} CWE476_NULL_Pointer_Dereference__int64_t_67_structType;
void FUN0(CWE476_NULL_Pointer_Dereference__int64_t_67_structType myStruct)
{
    int64_t * data = myStruct.structFirst;
    printLongLongLine(*data);
}
void FUN2(CWE476_NULL_Pointer_Dereference__int64_t_67_structType myStruct)
{
    int64_t * data = myStruct.structFirst;
    if (data != NULL)
    {
        printLongLongLine(*data);
    }
    else
    {
        printLine("data is NULL");
    }
}
