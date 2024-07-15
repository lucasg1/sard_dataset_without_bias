typedef struct _CWE190_Integer_Overflow__int64_t_max_multiply_67_structType
{
    int64_t structFirst;
} CWE190_Integer_Overflow__int64_t_max_multiply_67_structType;
void FUN0(CWE190_Integer_Overflow__int64_t_max_multiply_67_structType myStruct);
void FUN1()
{
    int64_t data;
    CWE190_Integer_Overflow__int64_t_max_multiply_67_structType myStruct;
    data = 0LL;
    data = LLONG_MAX;
    myStruct.structFirst = data;
    FUN0(myStruct);
}
typedef struct _CWE190_Integer_Overflow__int64_t_max_multiply_67_structType
{
    int64_t structFirst;
} CWE190_Integer_Overflow__int64_t_max_multiply_67_structType;
void FUN0(CWE190_Integer_Overflow__int64_t_max_multiply_67_structType myStruct)
{
    int64_t data = myStruct.structFirst;
    if(data > 0) 
    {
<START>
        int64_t result = data * 2;
<END>
        printLongLongLine(result);
    }
}
