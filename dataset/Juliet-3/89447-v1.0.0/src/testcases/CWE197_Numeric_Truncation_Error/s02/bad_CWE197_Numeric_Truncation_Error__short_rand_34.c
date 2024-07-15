typedef union
{
    short unionFirst;
    short unionSecond;
} CWE197_Numeric_Truncation_Error__short_rand_34_unionType;
void FUN0()
{
    short data;
    CWE197_Numeric_Truncation_Error__short_rand_34_unionType myUnion;
    data = -1;
    data = (short)RAND32();
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
