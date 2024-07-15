typedef struct _CWE476_NULL_Pointer_Dereference__int_67_structType
{
    int * structFirst;
} CWE476_NULL_Pointer_Dereference__int_67_structType;
void FUN0(CWE476_NULL_Pointer_Dereference__int_67_structType myStruct);
void FUN1()
{
    int * data;
    CWE476_NULL_Pointer_Dereference__int_67_structType myStruct;
    {
        int tmpData = 5;
        data = &tmpData;
    }
    myStruct.structFirst = data;
    FUN0(myStruct);
}
void FUN2(CWE476_NULL_Pointer_Dereference__int_67_structType myStruct);
void FUN3()
{
    int * data;
    CWE476_NULL_Pointer_Dereference__int_67_structType myStruct;
    data = NULL;
    myStruct.structFirst = data;
    FUN2(myStruct);
}
typedef struct _CWE476_NULL_Pointer_Dereference__int_67_structType
{
    int * structFirst;
} CWE476_NULL_Pointer_Dereference__int_67_structType;
void FUN0(CWE476_NULL_Pointer_Dereference__int_67_structType myStruct)
{
    int * data = myStruct.structFirst;
    printIntLine(*data);
}
void FUN2(CWE476_NULL_Pointer_Dereference__int_67_structType myStruct)
{
    int * data = myStruct.structFirst;
    if (data != NULL)
    {
        printIntLine(*data);
    }
    else
    {
        printLine("data is NULL");
    }
}
