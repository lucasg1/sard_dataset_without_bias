typedef union
{
    short unionFirst;
    short unionSecond;
} CWE197_Numeric_Truncation_Error__short_large_34_unionType;
void FUN0()
{
    short data;
    CWE197_Numeric_Truncation_Error__short_large_34_unionType myUnion;
    data = -1;
    data = CHAR_MAX + 1;
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
