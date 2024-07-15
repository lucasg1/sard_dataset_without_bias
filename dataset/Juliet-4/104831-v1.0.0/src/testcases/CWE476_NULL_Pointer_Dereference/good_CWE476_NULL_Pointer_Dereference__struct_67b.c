typedef struct _CWE476_NULL_Pointer_Dereference__struct_67_structType
{
    twoIntsStruct * structFirst;
} CWE476_NULL_Pointer_Dereference__struct_67_structType;
void FUN0(CWE476_NULL_Pointer_Dereference__struct_67_structType myStruct);
void FUN1()
{
    twoIntsStruct * data;
    CWE476_NULL_Pointer_Dereference__struct_67_structType myStruct;
    {
        twoIntsStruct tmpData;
        tmpData.intOne = 0;
        tmpData.intTwo = 0;
        data = &tmpData;
    }
    myStruct.structFirst = data;
    FUN0(myStruct);
}
void FUN2(CWE476_NULL_Pointer_Dereference__struct_67_structType myStruct);
void FUN3()
{
    twoIntsStruct * data;
    CWE476_NULL_Pointer_Dereference__struct_67_structType myStruct;
    data = NULL;
    myStruct.structFirst = data;
    FUN2(myStruct);
}
typedef struct _CWE476_NULL_Pointer_Dereference__struct_67_structType
{
    twoIntsStruct * structFirst;
} CWE476_NULL_Pointer_Dereference__struct_67_structType;
void FUN0(CWE476_NULL_Pointer_Dereference__struct_67_structType myStruct)
{
    twoIntsStruct * data = myStruct.structFirst;
    printIntLine(data->intOne);
}
void FUN2(CWE476_NULL_Pointer_Dereference__struct_67_structType myStruct)
{
    twoIntsStruct * data = myStruct.structFirst;
    if (data != NULL)
    {
        printIntLine(data->intOne);
    }
    else
    {
        printLine("data is NULL");
    }
}
