typedef struct _CWE190_Integer_Overflow__unsigned_int_fscanf_multiply_67_structType
{
    unsigned int structFirst;
} CWE190_Integer_Overflow__unsigned_int_fscanf_multiply_67_structType;
void FUN0(CWE190_Integer_Overflow__unsigned_int_fscanf_multiply_67_structType myStruct);
void FUN1()
{
    unsigned int data;
    CWE190_Integer_Overflow__unsigned_int_fscanf_multiply_67_structType myStruct;
    data = 0;
    fscanf (stdin, "%u", &data);
    myStruct.structFirst = data;
    FUN0(myStruct);
}
typedef struct _CWE190_Integer_Overflow__unsigned_int_fscanf_multiply_67_structType
{
    unsigned int structFirst;
} CWE190_Integer_Overflow__unsigned_int_fscanf_multiply_67_structType;
void FUN0(CWE190_Integer_Overflow__unsigned_int_fscanf_multiply_67_structType myStruct)
{
    unsigned int data = myStruct.structFirst;
    if(data > 0) 
    {
<START>
        unsigned int result = data * 2;
<END>
        printUnsignedLine(result);
    }
}
