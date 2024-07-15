typedef struct _CWE191_Integer_Underflow__short_rand_multiply_67_structType
{
    short structFirst;
} CWE191_Integer_Underflow__short_rand_multiply_67_structType;
void FUN0(CWE191_Integer_Underflow__short_rand_multiply_67_structType myStruct);
void FUN1()
{
    short data;
    CWE191_Integer_Underflow__short_rand_multiply_67_structType myStruct;
    data = 0;
    data = (short)RAND32();
    myStruct.structFirst = data;
    FUN0(myStruct);
}
typedef struct _CWE191_Integer_Underflow__short_rand_multiply_67_structType
{
    short structFirst;
} CWE191_Integer_Underflow__short_rand_multiply_67_structType;
void FUN0(CWE191_Integer_Underflow__short_rand_multiply_67_structType myStruct)
{
    short data = myStruct.structFirst;
    if(data < 0) 
    {
<START>
        short result = data * 2;
<END>
        printIntLine(result);
    }
}
