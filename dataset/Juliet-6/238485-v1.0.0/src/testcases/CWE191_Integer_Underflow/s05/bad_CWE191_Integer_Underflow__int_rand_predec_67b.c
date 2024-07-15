typedef struct _CWE191_Integer_Underflow__int_rand_predec_67_structType
{
    int structFirst;
} CWE191_Integer_Underflow__int_rand_predec_67_structType;
void FUN0(CWE191_Integer_Underflow__int_rand_predec_67_structType myStruct);
void FUN1()
{
    int data;
    CWE191_Integer_Underflow__int_rand_predec_67_structType myStruct;
    data = 0;
    data = RAND32();
    myStruct.structFirst = data;
    FUN0(myStruct);
}
typedef struct _CWE191_Integer_Underflow__int_rand_predec_67_structType
{
    int structFirst;
} CWE191_Integer_Underflow__int_rand_predec_67_structType;
void FUN0(CWE191_Integer_Underflow__int_rand_predec_67_structType myStruct)
{
    int data = myStruct.structFirst;
    {
<START>
        --data;
<END>
        int result = data;
        printIntLine(result);
    }
}
