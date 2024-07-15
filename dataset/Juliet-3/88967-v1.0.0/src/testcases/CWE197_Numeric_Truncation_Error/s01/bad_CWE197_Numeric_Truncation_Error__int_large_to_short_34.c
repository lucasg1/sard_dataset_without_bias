typedef union
{
    int unionFirst;
    int unionSecond;
} CWE197_Numeric_Truncation_Error__int_large_to_short_34_unionType;
void FUN0()
{
    int data;
    CWE197_Numeric_Truncation_Error__int_large_to_short_34_unionType myUnion;
    data = -1;
    data = SHRT_MAX + 5;
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
