typedef struct _CWE190_Integer_Overflow__unsigned_int_rand_multiply_67_structType
{
    unsigned int structFirst;
} CWE190_Integer_Overflow__unsigned_int_rand_multiply_67_structType;
void FUN0(CWE190_Integer_Overflow__unsigned_int_rand_multiply_67_structType myStruct);
void FUN1()
{
    unsigned int data;
    CWE190_Integer_Overflow__unsigned_int_rand_multiply_67_structType myStruct;
    data = 0;
    data = 2;
    myStruct.structFirst = data;
    FUN0(myStruct);
}
void FUN2(CWE190_Integer_Overflow__unsigned_int_rand_multiply_67_structType myStruct);
void FUN3()
{
    unsigned int data;
    CWE190_Integer_Overflow__unsigned_int_rand_multiply_67_structType myStruct;
    data = 0;
    data = (unsigned int)RAND32();
    myStruct.structFirst = data;
    FUN2(myStruct);
}
typedef struct _CWE190_Integer_Overflow__unsigned_int_rand_multiply_67_structType
{
    unsigned int structFirst;
} CWE190_Integer_Overflow__unsigned_int_rand_multiply_67_structType;
void FUN0(CWE190_Integer_Overflow__unsigned_int_rand_multiply_67_structType myStruct)
{
    unsigned int data = myStruct.structFirst;
    if(data > 0) 
    {
        unsigned int result = data * 2;
        printUnsignedLine(result);
    }
}
void FUN2(CWE190_Integer_Overflow__unsigned_int_rand_multiply_67_structType myStruct)
{
    unsigned int data = myStruct.structFirst;
    if(data > 0) 
    {
        if (data < (UINT_MAX/2))
        {
            unsigned int result = data * 2;
            printUnsignedLine(result);
        }
        else
        {
            printLine("data value is too large to perform arithmetic safely.");
        }
    }
}
