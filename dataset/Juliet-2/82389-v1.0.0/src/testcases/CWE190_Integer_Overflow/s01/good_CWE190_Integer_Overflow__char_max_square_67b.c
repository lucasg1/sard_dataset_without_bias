typedef struct _CWE190_Integer_Overflow__char_max_square_67_structType
{
    char structFirst;
} CWE190_Integer_Overflow__char_max_square_67_structType;
void FUN0(CWE190_Integer_Overflow__char_max_square_67_structType myStruct);
void FUN1()
{
    char data;
    CWE190_Integer_Overflow__char_max_square_67_structType myStruct;
    data = ' ';
    data = 2;
    myStruct.structFirst = data;
    FUN0(myStruct);
}
void FUN2(CWE190_Integer_Overflow__char_max_square_67_structType myStruct);
void FUN3()
{
    char data;
    CWE190_Integer_Overflow__char_max_square_67_structType myStruct;
    data = ' ';
    data = CHAR_MAX;
    myStruct.structFirst = data;
    FUN2(myStruct);
}
typedef struct _CWE190_Integer_Overflow__char_max_square_67_structType
{
    char structFirst;
} CWE190_Integer_Overflow__char_max_square_67_structType;
void FUN0(CWE190_Integer_Overflow__char_max_square_67_structType myStruct)
{
    char data = myStruct.structFirst;
    {
        char result = data * data;
        printHexCharLine(result);
    }
}
void FUN2(CWE190_Integer_Overflow__char_max_square_67_structType myStruct)
{
    char data = myStruct.structFirst;
    if (abs((long)data) <= (long)sqrt((double)CHAR_MAX))
    {
        char result = data * data;
        printHexCharLine(result);
    }
    else
    {
        printLine("data value is too large to perform arithmetic safely.");
    }
}
