typedef union
{
    short unionFirst;
    short unionSecond;
} CWE197_Numeric_Truncation_Error__short_fgets_34_unionType;
void FUN0()
{
    short data;
    CWE197_Numeric_Truncation_Error__short_fgets_34_unionType myUnion;
    data = -1;
    {
        char inputBuffer[CHAR_ARRAY_SIZE] = "";
        if (fgets(inputBuffer, CHAR_ARRAY_SIZE, stdin) != NULL)
        {
            data = (short)atoi(inputBuffer);
        }
        else
        {
            printLine("fgets() failed.");
        }
    }
    myUnion.unionFirst = data;
    {
        short data = myUnion.unionSecond;
        {
<START>
            char charData = (char)data;
<END>
            printHexCharLine(charData);
        }
    }
}
