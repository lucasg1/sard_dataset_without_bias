typedef struct _CWE191_Integer_Underflow__int_fgets_sub_67_structType
{
    int structFirst;
} CWE191_Integer_Underflow__int_fgets_sub_67_structType;
void FUN0(CWE191_Integer_Underflow__int_fgets_sub_67_structType myStruct);
void FUN1()
{
    int data;
    CWE191_Integer_Underflow__int_fgets_sub_67_structType myStruct;
    data = 0;
    data = -2;
    myStruct.structFirst = data;
    FUN0(myStruct);
}
void FUN2(CWE191_Integer_Underflow__int_fgets_sub_67_structType myStruct);
void FUN3()
{
    int data;
    CWE191_Integer_Underflow__int_fgets_sub_67_structType myStruct;
    data = 0;
    {
        char inputBuffer[CHAR_ARRAY_SIZE] = "";
        if (fgets(inputBuffer, CHAR_ARRAY_SIZE, stdin) != NULL)
        {
            data = atoi(inputBuffer);
        }
        else
        {
            printLine("fgets() failed.");
        }
    }
    myStruct.structFirst = data;
    FUN2(myStruct);
}
typedef struct _CWE191_Integer_Underflow__int_fgets_sub_67_structType
{
    int structFirst;
} CWE191_Integer_Underflow__int_fgets_sub_67_structType;
void FUN0(CWE191_Integer_Underflow__int_fgets_sub_67_structType myStruct)
{
    int data = myStruct.structFirst;
    {
        int result = data - 1;
        printIntLine(result);
    }
}
void FUN2(CWE191_Integer_Underflow__int_fgets_sub_67_structType myStruct)
{
    int data = myStruct.structFirst;
    if (data > INT_MIN)
    {
        int result = data - 1;
        printIntLine(result);
    }
    else
    {
        printLine("data value is too large to perform subtraction.");
    }
}
