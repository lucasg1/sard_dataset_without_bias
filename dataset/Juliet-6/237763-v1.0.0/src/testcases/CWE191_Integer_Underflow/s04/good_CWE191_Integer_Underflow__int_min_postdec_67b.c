typedef struct _CWE191_Integer_Underflow__int_min_postdec_67_structType
{
    int structFirst;
} CWE191_Integer_Underflow__int_min_postdec_67_structType;
void FUN0(CWE191_Integer_Underflow__int_min_postdec_67_structType myStruct);
void FUN1()
{
    int data;
    CWE191_Integer_Underflow__int_min_postdec_67_structType myStruct;
    data = 0;
    data = -2;
    myStruct.structFirst = data;
    FUN0(myStruct);
}
void FUN2(CWE191_Integer_Underflow__int_min_postdec_67_structType myStruct);
void FUN3()
{
    int data;
    CWE191_Integer_Underflow__int_min_postdec_67_structType myStruct;
    data = 0;
    data = INT_MIN;
    myStruct.structFirst = data;
    FUN2(myStruct);
}
typedef struct _CWE191_Integer_Underflow__int_min_postdec_67_structType
{
    int structFirst;
} CWE191_Integer_Underflow__int_min_postdec_67_structType;
void FUN0(CWE191_Integer_Underflow__int_min_postdec_67_structType myStruct)
{
    int data = myStruct.structFirst;
    {
        data--;
        int result = data;
        printIntLine(result);
    }
}
void FUN2(CWE191_Integer_Underflow__int_min_postdec_67_structType myStruct)
{
    int data = myStruct.structFirst;
    if (data > INT_MIN)
    {
        data--;
        int result = data;
        printIntLine(result);
    }
    else
    {
        printLine("data value is too large to perform arithmetic safely.");
    }
}
