typedef struct _CWE191_Integer_Underflow__int64_t_min_sub_67_structType
{
    int64_t structFirst;
} CWE191_Integer_Underflow__int64_t_min_sub_67_structType;
void FUN0(CWE191_Integer_Underflow__int64_t_min_sub_67_structType myStruct);
void FUN1()
{
    int64_t data;
    CWE191_Integer_Underflow__int64_t_min_sub_67_structType myStruct;
    data = 0LL;
    data = -2;
    myStruct.structFirst = data;
    FUN0(myStruct);
}
void FUN2(CWE191_Integer_Underflow__int64_t_min_sub_67_structType myStruct);
void FUN3()
{
    int64_t data;
    CWE191_Integer_Underflow__int64_t_min_sub_67_structType myStruct;
    data = 0LL;
    data = LLONG_MIN;
    myStruct.structFirst = data;
    FUN2(myStruct);
}
typedef struct _CWE191_Integer_Underflow__int64_t_min_sub_67_structType
{
    int64_t structFirst;
} CWE191_Integer_Underflow__int64_t_min_sub_67_structType;
void FUN0(CWE191_Integer_Underflow__int64_t_min_sub_67_structType myStruct)
{
    int64_t data = myStruct.structFirst;
    {
        int64_t result = data - 1;
        printLongLongLine(result);
    }
}
void FUN2(CWE191_Integer_Underflow__int64_t_min_sub_67_structType myStruct)
{
    int64_t data = myStruct.structFirst;
    if (data > LLONG_MIN)
    {
        int64_t result = data - 1;
        printLongLongLine(result);
    }
    else
    {
        printLine("data value is too large to perform subtraction.");
    }
}
