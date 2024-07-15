typedef struct _CWE191_Integer_Underflow__int_fscanf_multiply_67_structType
{
    int structFirst;
} CWE191_Integer_Underflow__int_fscanf_multiply_67_structType;
void FUN0(CWE191_Integer_Underflow__int_fscanf_multiply_67_structType myStruct);
void FUN1()
{
    int data;
    CWE191_Integer_Underflow__int_fscanf_multiply_67_structType myStruct;
    data = 0;
    data = -2;
    myStruct.structFirst = data;
    FUN0(myStruct);
}
void FUN2(CWE191_Integer_Underflow__int_fscanf_multiply_67_structType myStruct);
void FUN3()
{
    int data;
    CWE191_Integer_Underflow__int_fscanf_multiply_67_structType myStruct;
    data = 0;
    fscanf(stdin, "%d", &data);
    myStruct.structFirst = data;
    FUN2(myStruct);
}
typedef struct _CWE191_Integer_Underflow__int_fscanf_multiply_67_structType
{
    int structFirst;
} CWE191_Integer_Underflow__int_fscanf_multiply_67_structType;
void FUN0(CWE191_Integer_Underflow__int_fscanf_multiply_67_structType myStruct)
{
    int data = myStruct.structFirst;
    if(data < 0) 
    {
        int result = data * 2;
        printIntLine(result);
    }
}
void FUN2(CWE191_Integer_Underflow__int_fscanf_multiply_67_structType myStruct)
{
    int data = myStruct.structFirst;
    if(data < 0) 
    {
        if (data > (INT_MIN/2))
        {
            int result = data * 2;
            printIntLine(result);
        }
        else
        {
            printLine("data value is too small to perform multiplication.");
        }
    }
}
