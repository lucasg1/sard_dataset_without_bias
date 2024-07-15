typedef struct _CWE191_Integer_Underflow__short_fscanf_sub_67_structType
{
    short structFirst;
} CWE191_Integer_Underflow__short_fscanf_sub_67_structType;
void FUN0(CWE191_Integer_Underflow__short_fscanf_sub_67_structType myStruct);
void FUN1()
{
    short data;
    CWE191_Integer_Underflow__short_fscanf_sub_67_structType myStruct;
    data = 0;
    fscanf (stdin, "%hd", &data);
    myStruct.structFirst = data;
    FUN0(myStruct);
}
typedef struct _CWE191_Integer_Underflow__short_fscanf_sub_67_structType
{
    short structFirst;
} CWE191_Integer_Underflow__short_fscanf_sub_67_structType;
void FUN0(CWE191_Integer_Underflow__short_fscanf_sub_67_structType myStruct)
{
    short data = myStruct.structFirst;
    {
<START>
        short result = data - 1;
<END>
        printIntLine(result);
    }
}
