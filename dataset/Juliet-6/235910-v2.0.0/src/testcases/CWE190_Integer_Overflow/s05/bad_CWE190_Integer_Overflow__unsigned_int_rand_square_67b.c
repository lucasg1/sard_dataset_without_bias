typedef struct _CWE190_Integer_Overflow__unsigned_int_rand_square_67_structType
{
    unsigned int structFirst;
} CWE190_Integer_Overflow__unsigned_int_rand_square_67_structType;
void FUN0(CWE190_Integer_Overflow__unsigned_int_rand_square_67_structType myStruct);
void FUN1()
{
    unsigned int data;
    CWE190_Integer_Overflow__unsigned_int_rand_square_67_structType myStruct;
    data = 0;
    data = (unsigned int)RAND32();
    myStruct.structFirst = data;
    FUN0(myStruct);
}
typedef struct _CWE190_Integer_Overflow__unsigned_int_rand_square_67_structType
{
    unsigned int structFirst;
} CWE190_Integer_Overflow__unsigned_int_rand_square_67_structType;
void FUN0(CWE190_Integer_Overflow__unsigned_int_rand_square_67_structType myStruct)
{
    unsigned int data = myStruct.structFirst;
    {
<START>
        unsigned int result = data * data;
<END>
        printUnsignedLine(result);
    }
}
