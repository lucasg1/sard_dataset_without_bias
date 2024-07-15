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
    data = -2;
    myStruct.structFirst = data;
    FUN0(myStruct);
}
void FUN2(CWE191_Integer_Underflow__unsigned_int_rand_sub_67_structType myStruct);
void FUN3()
{
    unsigned int data;
    CWE191_Integer_Underflow__unsigned_int_rand_sub_67_structType myStruct;
    data = 0;
    data = (unsigned int)RAND32();
    myStruct.structFirst = data;
    FUN2(myStruct);
}
typedef struct _CWE191_Integer_Underflow__unsigned_int_rand_sub_67_structType
{
    unsigned int structFirst;
} CWE191_Integer_Underflow__unsigned_int_rand_sub_67_structType;
void FUN0(CWE191_Integer_Underflow__unsigned_int_rand_sub_67_structType myStruct)
{
    unsigned int data = myStruct.structFirst;
    {
        unsigned int result = data - 1;
        printUnsignedLine(result);
    }
}
void FUN2(CWE191_Integer_Underflow__unsigned_int_rand_sub_67_structType myStruct)
{
    unsigned int data = myStruct.structFirst;
    if (data > 0)
    {
        unsigned int result = data - 1;
        printUnsignedLine(result);
    }
    else
    {
        printLine("data value is too large to perform subtraction.");
    }
}
