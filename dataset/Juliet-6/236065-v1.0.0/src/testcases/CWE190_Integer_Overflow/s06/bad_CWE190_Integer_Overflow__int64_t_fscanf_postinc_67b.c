typedef struct _CWE190_Integer_Overflow__int64_t_fscanf_postinc_67_structType
{
    int64_t structFirst;
} CWE190_Integer_Overflow__int64_t_fscanf_postinc_67_structType;
void FUN0(CWE190_Integer_Overflow__int64_t_fscanf_postinc_67_structType myStruct);
void FUN1()
{
    int64_t data;
    CWE190_Integer_Overflow__int64_t_fscanf_postinc_67_structType myStruct;
    data = 0LL;
    fscanf (stdin, "%" SCNd64, &data);
    myStruct.structFirst = data;
    FUN0(myStruct);
}
typedef struct _CWE190_Integer_Overflow__int64_t_fscanf_postinc_67_structType
{
    int64_t structFirst;
} CWE190_Integer_Overflow__int64_t_fscanf_postinc_67_structType;
void FUN0(CWE190_Integer_Overflow__int64_t_fscanf_postinc_67_structType myStruct)
{
    int64_t data = myStruct.structFirst;
    {
<START>
        data++;
<END>
        int64_t result = data;
        printLongLongLine(result);
    }
}
