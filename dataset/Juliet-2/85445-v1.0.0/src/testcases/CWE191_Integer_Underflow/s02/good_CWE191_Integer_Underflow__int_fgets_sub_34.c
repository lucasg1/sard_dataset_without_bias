typedef union
{
    int unionFirst;
    int unionSecond;
} CWE191_Integer_Underflow__int_fgets_sub_34_unionType;
void FUN0()
{
    int data;
    CWE191_Integer_Underflow__int_fgets_sub_34_unionType myUnion;
    data = 0;
    data = -2;
    myUnion.unionFirst = data;
    {
        int data = myUnion.unionSecond;
        {
            int result = data - 1;
            printIntLine(result);
        }
    }
}
void FUN1()
{
    int data;
    CWE191_Integer_Underflow__int_fgets_sub_34_unionType myUnion;
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
    myUnion.unionFirst = data;
    {
        int data = myUnion.unionSecond;
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
}
