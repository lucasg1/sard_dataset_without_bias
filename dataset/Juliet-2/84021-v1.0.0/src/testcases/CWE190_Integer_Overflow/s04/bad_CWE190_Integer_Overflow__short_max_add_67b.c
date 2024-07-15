typedef struct _CWE190_Integer_Overflow__short_max_add_67_structType
{
    short structFirst;
} CWE190_Integer_Overflow__short_max_add_67_structType;
void FUN0(CWE190_Integer_Overflow__short_max_add_67_structType myStruct);
void FUN1()
{
    short data;
    CWE190_Integer_Overflow__short_max_add_67_structType myStruct;
    data = 0;
    data = SHRT_MAX;
    myStruct.structFirst = data;
    FUN0(myStruct);
}
typedef struct _CWE190_Integer_Overflow__short_max_add_67_structType
{
    short structFirst;
} CWE190_Integer_Overflow__short_max_add_67_structType;
void FUN0(CWE190_Integer_Overflow__short_max_add_67_structType myStruct)
{
    short data = myStruct.structFirst;
    {
<START>
        short result = data + 1;
<END>
        printIntLine(result);
    }
}
