typedef struct _CWE191_Integer_Underflow__short_min_sub_67_structType
{
    short structFirst;
} CWE191_Integer_Underflow__short_min_sub_67_structType;
void FUN0(CWE191_Integer_Underflow__short_min_sub_67_structType myStruct);
void FUN1()
{
    short data;
    CWE191_Integer_Underflow__short_min_sub_67_structType myStruct;
    data = 0;
    data = -2;
    myStruct.structFirst = data;
    FUN0(myStruct);
}
void FUN2(CWE191_Integer_Underflow__short_min_sub_67_structType myStruct);
void FUN3()
{
    short data;
    CWE191_Integer_Underflow__short_min_sub_67_structType myStruct;
    data = 0;
    data = SHRT_MIN;
    myStruct.structFirst = data;
    FUN2(myStruct);
}
typedef struct _CWE191_Integer_Underflow__short_min_sub_67_structType
{
    short structFirst;
} CWE191_Integer_Underflow__short_min_sub_67_structType;
void FUN0(CWE191_Integer_Underflow__short_min_sub_67_structType myStruct)
{
    short data = myStruct.structFirst;
    {
        short result = data - 1;
        printIntLine(result);
    }
}
void FUN2(CWE191_Integer_Underflow__short_min_sub_67_structType myStruct)
{
    short data = myStruct.structFirst;
    if (data > SHRT_MIN)
    {
        short result = data - 1;
        printIntLine(result);
    }
    else
    {
        printLine("data value is too large to perform subtraction.");
    }
}
