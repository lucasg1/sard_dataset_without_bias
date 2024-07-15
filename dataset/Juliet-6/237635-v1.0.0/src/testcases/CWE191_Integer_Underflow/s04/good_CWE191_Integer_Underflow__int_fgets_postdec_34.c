typedef union
{
    int unionFirst;
    int unionSecond;
} CWE191_Integer_Underflow__int_fgets_postdec_34_unionType;
void FUN0()
{
    int data;
    CWE191_Integer_Underflow__int_fgets_postdec_34_unionType myUnion;
    data = 0;
    data = -2;
    myUnion.unionFirst = data;
    {
        int data = myUnion.unionSecond;
        {
            data--;
            int result = data;
            printIntLine(result);
        }
    }
}
void FUN1()
{
    int data;
    CWE191_Integer_Underflow__int_fgets_postdec_34_unionType myUnion;
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
            data--;
            int result = data;
            printIntLine(result);
        }
        else
        {
            printLine("data value is too large to perform arithmetic safely.");
        }
    }
}
