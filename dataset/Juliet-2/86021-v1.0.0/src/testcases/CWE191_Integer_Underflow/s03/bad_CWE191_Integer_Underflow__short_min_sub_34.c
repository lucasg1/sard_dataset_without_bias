typedef union
{
    short unionFirst;
    short unionSecond;
} CWE191_Integer_Underflow__short_min_sub_34_unionType;
void FUN0()
{
    short data;
    CWE191_Integer_Underflow__short_min_sub_34_unionType myUnion;
    data = 0;
    data = SHRT_MIN;
    myUnion.unionFirst = data;
    {
        short data = myUnion.unionSecond;
        {
<START>
            short result = data - 1;
<END>
            printIntLine(result);
        }
    }
}
