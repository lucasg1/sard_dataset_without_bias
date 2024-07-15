typedef struct _CWE191_Integer_Underflow__char_min_sub_67_structType
{
    char structFirst;
} CWE191_Integer_Underflow__char_min_sub_67_structType;
void FUN0(CWE191_Integer_Underflow__char_min_sub_67_structType myStruct);
void FUN1()
{
    char data;
    CWE191_Integer_Underflow__char_min_sub_67_structType myStruct;
    data = ' ';
    data = -2;
    myStruct.structFirst = data;
    FUN0(myStruct);
}
void FUN2(CWE191_Integer_Underflow__char_min_sub_67_structType myStruct);
void FUN3()
{
    char data;
    CWE191_Integer_Underflow__char_min_sub_67_structType myStruct;
    data = ' ';
    data = CHAR_MIN;
    myStruct.structFirst = data;
    FUN2(myStruct);
}
typedef struct _CWE191_Integer_Underflow__char_min_sub_67_structType
{
    char structFirst;
} CWE191_Integer_Underflow__char_min_sub_67_structType;
void FUN0(CWE191_Integer_Underflow__char_min_sub_67_structType myStruct)
{
    char data = myStruct.structFirst;
    {
        char result = data - 1;
        printHexCharLine(result);
    }
}
void FUN2(CWE191_Integer_Underflow__char_min_sub_67_structType myStruct)
{
    char data = myStruct.structFirst;
    if (data > CHAR_MIN)
    {
        char result = data - 1;
        printHexCharLine(result);
    }
    else
    {
        printLine("data value is too large to perform subtraction.");
    }
}
