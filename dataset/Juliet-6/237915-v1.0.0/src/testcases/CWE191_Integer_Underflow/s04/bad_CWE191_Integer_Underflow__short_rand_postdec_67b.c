typedef struct _CWE191_Integer_Underflow__short_rand_postdec_67_structType
{
    short structFirst;
} CWE191_Integer_Underflow__short_rand_postdec_67_structType;
void FUN0(CWE191_Integer_Underflow__short_rand_postdec_67_structType myStruct);
void FUN1()
{
    short data;
    CWE191_Integer_Underflow__short_rand_postdec_67_structType myStruct;
    data = 0;
    data = (short)RAND32();
    myStruct.structFirst = data;
    FUN0(myStruct);
}
typedef struct _CWE191_Integer_Underflow__short_rand_postdec_67_structType
{
    short structFirst;
} CWE191_Integer_Underflow__short_rand_postdec_67_structType;
void FUN0(CWE191_Integer_Underflow__short_rand_postdec_67_structType myStruct)
{
    short data = myStruct.structFirst;
    {
<START>
        data--;
<END>
        short result = data;
        printIntLine(result);
    }
}
