typedef struct _CWE191_Integer_Underflow__int64_t_fscanf_sub_67_structType
{
    int64_t structFirst;
} CWE191_Integer_Underflow__int64_t_fscanf_sub_67_structType;
void FUN0(CWE191_Integer_Underflow__int64_t_fscanf_sub_67_structType myStruct);
void FUN1()
{
    int64_t data;
    CWE191_Integer_Underflow__int64_t_fscanf_sub_67_structType myStruct;
    data = 0LL;
    fscanf (stdin, "%lld", &data);
    myStruct.structFirst = data;
    FUN0(myStruct);
}
typedef struct _CWE191_Integer_Underflow__int64_t_fscanf_sub_67_structType
{
    int64_t structFirst;
} CWE191_Integer_Underflow__int64_t_fscanf_sub_67_structType;
void FUN0(CWE191_Integer_Underflow__int64_t_fscanf_sub_67_structType myStruct)
{
    int64_t data = myStruct.structFirst;
    {
<START>
        int64_t result = data - 1;
<END>
        printLongLongLine(result);
    }
}
