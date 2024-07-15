typedef union
{
    int unionFirst;
    int unionSecond;
} CWE197_Numeric_Truncation_Error__int_fgets_to_short_34_unionType;
void FUN0()
{
    int data;
    CWE197_Numeric_Truncation_Error__int_fgets_to_short_34_unionType myUnion;
    data = -1;
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
            short shortData = (short)data;
<END>
            printShortLine(shortData);
        }
    }
}
