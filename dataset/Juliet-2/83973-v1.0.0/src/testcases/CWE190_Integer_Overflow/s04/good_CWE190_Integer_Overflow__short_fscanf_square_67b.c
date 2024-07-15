typedef struct _CWE190_Integer_Overflow__short_fscanf_square_67_structType
{
    short structFirst;
} CWE190_Integer_Overflow__short_fscanf_square_67_structType;
void FUN0(CWE190_Integer_Overflow__short_fscanf_square_67_structType myStruct);
void FUN1()
{
    short data;
    CWE190_Integer_Overflow__short_fscanf_square_67_structType myStruct;
    data = 0;
    data = 2;
    myStruct.structFirst = data;
    FUN0(myStruct);
}
void FUN2(CWE190_Integer_Overflow__short_fscanf_square_67_structType myStruct);
void FUN3()
{
    short data;
    CWE190_Integer_Overflow__short_fscanf_square_67_structType myStruct;
    data = 0;
    fscanf (stdin, "%hd", &data);
    myStruct.structFirst = data;
    FUN2(myStruct);
}
typedef struct _CWE190_Integer_Overflow__short_fscanf_square_67_structType
{
    short structFirst;
} CWE190_Integer_Overflow__short_fscanf_square_67_structType;
void FUN0(CWE190_Integer_Overflow__short_fscanf_square_67_structType myStruct)
{
    short data = myStruct.structFirst;
    {
        short result = data * data;
        printIntLine(result);
    }
}
void FUN2(CWE190_Integer_Overflow__short_fscanf_square_67_structType myStruct)
{
    short data = myStruct.structFirst;
    if (abs((long)data) <= (long)sqrt((double)SHRT_MAX))
    {
        short result = data * data;
        printIntLine(result);
    }
    else
    {
        printLine("data value is too large to perform arithmetic safely.");
    }
}
