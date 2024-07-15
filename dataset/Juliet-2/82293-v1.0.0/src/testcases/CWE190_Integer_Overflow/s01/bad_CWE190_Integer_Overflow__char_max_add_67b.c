typedef struct _CWE190_Integer_Overflow__char_max_add_67_structType
{
    char structFirst;
} CWE190_Integer_Overflow__char_max_add_67_structType;
void FUN0(CWE190_Integer_Overflow__char_max_add_67_structType myStruct);
void FUN1()
{
    char data;
    CWE190_Integer_Overflow__char_max_add_67_structType myStruct;
    data = ' ';
    data = CHAR_MAX;
    myStruct.structFirst = data;
    FUN0(myStruct);
}
typedef struct _CWE190_Integer_Overflow__char_max_add_67_structType
{
    char structFirst;
} CWE190_Integer_Overflow__char_max_add_67_structType;
void FUN0(CWE190_Integer_Overflow__char_max_add_67_structType myStruct)
{
    char data = myStruct.structFirst;
    {
<START>
        char result = data + 1;
<END>
        printHexCharLine(result);
    }
}
