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
        {
<START>
            int result = data - 1;
<END>
            printIntLine(result);
        }
    }
}
