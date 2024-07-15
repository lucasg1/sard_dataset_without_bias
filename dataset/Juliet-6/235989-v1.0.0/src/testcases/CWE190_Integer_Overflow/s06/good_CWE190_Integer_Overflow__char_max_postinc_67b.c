typedef struct _CWE190_Integer_Overflow__char_max_postinc_67_structType
{
    char structFirst;
} CWE190_Integer_Overflow__char_max_postinc_67_structType;
void FUN0(CWE190_Integer_Overflow__char_max_postinc_67_structType myStruct);
void FUN1()
{
    char data;
    CWE190_Integer_Overflow__char_max_postinc_67_structType myStruct;
    data = ' ';
    data = 2;
    myStruct.structFirst = data;
    FUN0(myStruct);
}
void FUN2(CWE190_Integer_Overflow__char_max_postinc_67_structType myStruct);
void FUN3()
{
    char data;
    CWE190_Integer_Overflow__char_max_postinc_67_structType myStruct;
    data = ' ';
    data = CHAR_MAX;
    myStruct.structFirst = data;
    FUN2(myStruct);
}
typedef struct _CWE190_Integer_Overflow__char_max_postinc_67_structType
{
    char structFirst;
} CWE190_Integer_Overflow__char_max_postinc_67_structType;
void FUN0(CWE190_Integer_Overflow__char_max_postinc_67_structType myStruct)
{
    char data = myStruct.structFirst;
    {
        data++;
        char result = data;
        printHexCharLine(result);
    }
}
void FUN2(CWE190_Integer_Overflow__char_max_postinc_67_structType myStruct)
{
    char data = myStruct.structFirst;
    if (data < CHAR_MAX)
    {
        data++;
        char result = data;
        printHexCharLine(result);
    }
    else
    {
        printLine("data value is too large to perform arithmetic safely.");
    }
}
