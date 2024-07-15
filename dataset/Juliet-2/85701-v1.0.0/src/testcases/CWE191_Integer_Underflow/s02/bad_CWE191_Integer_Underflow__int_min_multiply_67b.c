typedef struct _CWE191_Integer_Underflow__int_min_multiply_67_structType
{
    int structFirst;
} CWE191_Integer_Underflow__int_min_multiply_67_structType;
void FUN0(CWE191_Integer_Underflow__int_min_multiply_67_structType myStruct);
void FUN1()
{
    int data;
    CWE191_Integer_Underflow__int_min_multiply_67_structType myStruct;
    data = 0;
    data = INT_MIN;
    myStruct.structFirst = data;
    FUN0(myStruct);
}
typedef struct _CWE191_Integer_Underflow__int_min_multiply_67_structType
{
    int structFirst;
} CWE191_Integer_Underflow__int_min_multiply_67_structType;
void FUN0(CWE191_Integer_Underflow__int_min_multiply_67_structType myStruct)
{
    int data = myStruct.structFirst;
    if(data < 0) 
    {
<START>
        int result = data * 2;
<END>
        printIntLine(result);
    }
}
