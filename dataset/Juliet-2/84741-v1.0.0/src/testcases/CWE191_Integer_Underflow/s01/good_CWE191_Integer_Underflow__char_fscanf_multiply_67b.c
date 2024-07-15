typedef struct _CWE191_Integer_Underflow__char_fscanf_multiply_67_structType
{
    char structFirst;
} CWE191_Integer_Underflow__char_fscanf_multiply_67_structType;
void FUN0(CWE191_Integer_Underflow__char_fscanf_multiply_67_structType myStruct);
void FUN1()
{
    char data;
    CWE191_Integer_Underflow__char_fscanf_multiply_67_structType myStruct;
    data = ' ';
    data = -2;
    myStruct.structFirst = data;
    FUN0(myStruct);
}
void FUN2(CWE191_Integer_Underflow__char_fscanf_multiply_67_structType myStruct);
void FUN3()
{
    char data;
    CWE191_Integer_Underflow__char_fscanf_multiply_67_structType myStruct;
    data = ' ';
    fscanf (stdin, "%c", &data);
    myStruct.structFirst = data;
    FUN2(myStruct);
}
typedef struct _CWE191_Integer_Underflow__char_fscanf_multiply_67_structType
{
    char structFirst;
} CWE191_Integer_Underflow__char_fscanf_multiply_67_structType;
void FUN0(CWE191_Integer_Underflow__char_fscanf_multiply_67_structType myStruct)
{
    char data = myStruct.structFirst;
    if(data < 0) 
    {
        char result = data * 2;
        printHexCharLine(result);
    }
}
void FUN2(CWE191_Integer_Underflow__char_fscanf_multiply_67_structType myStruct)
{
    char data = myStruct.structFirst;
    if(data < 0) 
    {
        if (data > (CHAR_MIN/2))
        {
            char result = data * 2;
            printHexCharLine(result);
        }
        else
        {
            printLine("data value is too small to perform multiplication.");
        }
    }
}
