typedef struct _CWE476_NULL_Pointer_Dereference__char_67_structType
{
    char * structFirst;
} CWE476_NULL_Pointer_Dereference__char_67_structType;
void FUN0(CWE476_NULL_Pointer_Dereference__char_67_structType myStruct);
void FUN1()
{
    char * data;
    CWE476_NULL_Pointer_Dereference__char_67_structType myStruct;
    data = "Good";
    myStruct.structFirst = data;
    FUN0(myStruct);
}
void FUN2(CWE476_NULL_Pointer_Dereference__char_67_structType myStruct);
void FUN3()
{
    char * data;
    CWE476_NULL_Pointer_Dereference__char_67_structType myStruct;
    data = NULL;
    myStruct.structFirst = data;
    FUN2(myStruct);
}
typedef struct _CWE476_NULL_Pointer_Dereference__char_67_structType
{
    char * structFirst;
} CWE476_NULL_Pointer_Dereference__char_67_structType;
void FUN0(CWE476_NULL_Pointer_Dereference__char_67_structType myStruct)
{
    char * data = myStruct.structFirst;
    printHexCharLine(data[0]);
}
void FUN2(CWE476_NULL_Pointer_Dereference__char_67_structType myStruct)
{
    char * data = myStruct.structFirst;
    if (data != NULL)
    {
        printHexCharLine(data[0]);
    }
    else
    {
        printLine("data is NULL");
    }
}
