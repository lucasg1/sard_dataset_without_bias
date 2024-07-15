typedef struct _CWE191_Integer_Underflow__unsigned_int_fscanf_postdec_67_structType
{
    unsigned int structFirst;
} CWE191_Integer_Underflow__unsigned_int_fscanf_postdec_67_structType;
void FUN0(CWE191_Integer_Underflow__unsigned_int_fscanf_postdec_67_structType myStruct);
void FUN1()
{
    unsigned int data;
    CWE191_Integer_Underflow__unsigned_int_fscanf_postdec_67_structType myStruct;
    data = 0;
    data = -2;
    myStruct.structFirst = data;
    FUN0(myStruct);
}
void FUN2(CWE191_Integer_Underflow__unsigned_int_fscanf_postdec_67_structType myStruct);
void FUN3()
{
    unsigned int data;
    CWE191_Integer_Underflow__unsigned_int_fscanf_postdec_67_structType myStruct;
    data = 0;
    fscanf (stdin, "%u", &data);
    myStruct.structFirst = data;
    FUN2(myStruct);
}
typedef struct _CWE191_Integer_Underflow__unsigned_int_fscanf_postdec_67_structType
{
    unsigned int structFirst;
} CWE191_Integer_Underflow__unsigned_int_fscanf_postdec_67_structType;
void FUN0(CWE191_Integer_Underflow__unsigned_int_fscanf_postdec_67_structType myStruct)
{
    unsigned int data = myStruct.structFirst;
    {
        data--;
        unsigned int result = data;
        printUnsignedLine(result);
    }
}
void FUN2(CWE191_Integer_Underflow__unsigned_int_fscanf_postdec_67_structType myStruct)
{
    unsigned int data = myStruct.structFirst;
    if (data > 0)
    {
        data--;
        unsigned int result = data;
        printUnsignedLine(result);
    }
    else
    {
        printLine("data value is too large to perform arithmetic safely.");
    }
}
