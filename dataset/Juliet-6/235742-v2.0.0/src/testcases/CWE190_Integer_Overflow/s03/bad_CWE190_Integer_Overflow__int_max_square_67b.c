typedef struct _CWE190_Integer_Overflow__int_max_square_67_structType
{
    int structFirst;
} CWE190_Integer_Overflow__int_max_square_67_structType;
void FUN0(CWE190_Integer_Overflow__int_max_square_67_structType myStruct);
void FUN1()
{
    int data;
    CWE190_Integer_Overflow__int_max_square_67_structType myStruct;
    data = 0;
    data = INT_MAX;
    myStruct.structFirst = data;
    FUN0(myStruct);
}
typedef struct _CWE190_Integer_Overflow__int_max_square_67_structType
{
    int structFirst;
} CWE190_Integer_Overflow__int_max_square_67_structType;
void FUN0(CWE190_Integer_Overflow__int_max_square_67_structType myStruct)
{
    int data = myStruct.structFirst;
    {
<START>
        int result = data * data;
<END>
        printIntLine(result);
    }
}
