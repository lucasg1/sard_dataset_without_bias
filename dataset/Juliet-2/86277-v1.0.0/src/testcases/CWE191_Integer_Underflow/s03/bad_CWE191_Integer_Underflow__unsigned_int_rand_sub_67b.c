typedef struct _CWE191_Integer_Underflow__unsigned_int_rand_sub_67_structType
{
    unsigned int structFirst;
} CWE191_Integer_Underflow__unsigned_int_rand_sub_67_structType;
void FUN0(CWE191_Integer_Underflow__unsigned_int_rand_sub_67_structType myStruct);
void FUN1()
{
    unsigned int data;
    CWE191_Integer_Underflow__unsigned_int_rand_sub_67_structType myStruct;
    data = 0;
    data = (unsigned int)RAND32();
    myStruct.structFirst = data;
    FUN0(myStruct);
}
typedef struct _CWE191_Integer_Underflow__unsigned_int_rand_sub_67_structType
{
    unsigned int structFirst;
} CWE191_Integer_Underflow__unsigned_int_rand_sub_67_structType;
void FUN0(CWE191_Integer_Underflow__unsigned_int_rand_sub_67_structType myStruct)
{
    unsigned int data = myStruct.structFirst;
    {
<START>
        unsigned int result = data - 1;
<END>
        printUnsignedLine(result);
    }
}
