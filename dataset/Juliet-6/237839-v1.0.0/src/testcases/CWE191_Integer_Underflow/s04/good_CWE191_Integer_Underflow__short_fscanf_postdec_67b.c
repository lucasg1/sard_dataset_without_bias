typedef struct _CWE191_Integer_Underflow__short_fscanf_postdec_67_structType
{
    short structFirst;
} CWE191_Integer_Underflow__short_fscanf_postdec_67_structType;
void FUN0(CWE191_Integer_Underflow__short_fscanf_postdec_67_structType myStruct);
void FUN1()
{
    short data;
    CWE191_Integer_Underflow__short_fscanf_postdec_67_structType myStruct;
    data = 0;
    data = -2;
    myStruct.structFirst = data;
    FUN0(myStruct);
}
void FUN2(CWE191_Integer_Underflow__short_fscanf_postdec_67_structType myStruct);
void FUN3()
{
    short data;
    CWE191_Integer_Underflow__short_fscanf_postdec_67_structType myStruct;
    data = 0;
    fscanf (stdin, "%hd", &data);
    myStruct.structFirst = data;
    FUN2(myStruct);
}
typedef struct _CWE191_Integer_Underflow__short_fscanf_postdec_67_structType
{
    short structFirst;
} CWE191_Integer_Underflow__short_fscanf_postdec_67_structType;
void FUN0(CWE191_Integer_Underflow__short_fscanf_postdec_67_structType myStruct)
{
    short data = myStruct.structFirst;
    {
        data--;
        short result = data;
        printIntLine(result);
    }
}
void FUN2(CWE191_Integer_Underflow__short_fscanf_postdec_67_structType myStruct)
{
    short data = myStruct.structFirst;
    if (data > SHRT_MIN)
    {
        data--;
        short result = data;
        printIntLine(result);
    }
    else
    {
        printLine("data value is too large to perform arithmetic safely.");
    }
}
