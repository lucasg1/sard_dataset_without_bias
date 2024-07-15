typedef struct _CWE191_Integer_Underflow__char_rand_multiply_67_structType
{
    char structFirst;
} CWE191_Integer_Underflow__char_rand_multiply_67_structType;
void FUN0(CWE191_Integer_Underflow__char_rand_multiply_67_structType myStruct);
void FUN1()
{
    char data;
    CWE191_Integer_Underflow__char_rand_multiply_67_structType myStruct;
    data = ' ';
    data = (char)RAND32();
    myStruct.structFirst = data;
    FUN0(myStruct);
}
typedef struct _CWE191_Integer_Underflow__char_rand_multiply_67_structType
{
    char structFirst;
} CWE191_Integer_Underflow__char_rand_multiply_67_structType;
void FUN0(CWE191_Integer_Underflow__char_rand_multiply_67_structType myStruct)
{
    char data = myStruct.structFirst;
    if(data < 0) 
    {
<START>
        char result = data * 2;
<END>
        printHexCharLine(result);
    }
}
