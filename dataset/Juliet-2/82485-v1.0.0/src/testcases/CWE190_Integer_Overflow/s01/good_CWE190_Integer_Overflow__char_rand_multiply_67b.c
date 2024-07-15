typedef struct _CWE190_Integer_Overflow__char_rand_multiply_67_structType
{
    char structFirst;
} CWE190_Integer_Overflow__char_rand_multiply_67_structType;
void FUN0(CWE190_Integer_Overflow__char_rand_multiply_67_structType myStruct);
void FUN1()
{
    char data;
    CWE190_Integer_Overflow__char_rand_multiply_67_structType myStruct;
    data = ' ';
    data = 2;
    myStruct.structFirst = data;
    FUN0(myStruct);
}
void FUN2(CWE190_Integer_Overflow__char_rand_multiply_67_structType myStruct);
void FUN3()
{
    char data;
    CWE190_Integer_Overflow__char_rand_multiply_67_structType myStruct;
    data = ' ';
    data = (char)RAND32();
    myStruct.structFirst = data;
    FUN2(myStruct);
}
typedef struct _CWE190_Integer_Overflow__char_rand_multiply_67_structType
{
    char structFirst;
} CWE190_Integer_Overflow__char_rand_multiply_67_structType;
void FUN0(CWE190_Integer_Overflow__char_rand_multiply_67_structType myStruct)
{
    char data = myStruct.structFirst;
    if(data > 0) 
    {
        char result = data * 2;
        printHexCharLine(result);
    }
}
void FUN2(CWE190_Integer_Overflow__char_rand_multiply_67_structType myStruct)
{
    char data = myStruct.structFirst;
    if(data > 0) 
    {
        if (data < (CHAR_MAX/2))
        {
            char result = data * 2;
            printHexCharLine(result);
        }
        else
        {
            printLine("data value is too large to perform arithmetic safely.");
        }
    }
}
