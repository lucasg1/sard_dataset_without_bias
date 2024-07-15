typedef struct _CWE190_Integer_Overflow__unsigned_int_fscanf_square_67_structType
{
    unsigned int structFirst;
} CWE190_Integer_Overflow__unsigned_int_fscanf_square_67_structType;
void FUN0(CWE190_Integer_Overflow__unsigned_int_fscanf_square_67_structType myStruct);
void FUN1()
{
    unsigned int data;
    CWE190_Integer_Overflow__unsigned_int_fscanf_square_67_structType myStruct;
    data = 0;
    data = 2;
    myStruct.structFirst = data;
    FUN0(myStruct);
}
void FUN2(CWE190_Integer_Overflow__unsigned_int_fscanf_square_67_structType myStruct);
void FUN3()
{
    unsigned int data;
    CWE190_Integer_Overflow__unsigned_int_fscanf_square_67_structType myStruct;
    data = 0;
    fscanf (stdin, "%u", &data);
    myStruct.structFirst = data;
    FUN2(myStruct);
}
typedef struct _CWE190_Integer_Overflow__unsigned_int_fscanf_square_67_structType
{
    unsigned int structFirst;
} CWE190_Integer_Overflow__unsigned_int_fscanf_square_67_structType;
void FUN0(CWE190_Integer_Overflow__unsigned_int_fscanf_square_67_structType myStruct)
{
    unsigned int data = myStruct.structFirst;
    {
        unsigned int result = data * data;
        printUnsignedLine(result);
    }
}
void FUN2(CWE190_Integer_Overflow__unsigned_int_fscanf_square_67_structType myStruct)
{
    unsigned int data = myStruct.structFirst;
    if (abs((long)data) < (long)sqrt((double)UINT_MAX))
    {
        unsigned int result = data * data;
        printUnsignedLine(result);
    }
    else
    {
        printLine("data value is too large to perform arithmetic safely.");
    }
}
