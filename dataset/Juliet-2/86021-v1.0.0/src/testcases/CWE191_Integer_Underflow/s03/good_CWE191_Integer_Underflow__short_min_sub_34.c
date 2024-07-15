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
    data = -2;
    myUnion.unionFirst = data;
    {
        short data = myUnion.unionSecond;
        {
            short result = data - 1;
            printIntLine(result);
        }
    }
}
void FUN1()
{
    short data;
    CWE191_Integer_Underflow__short_min_sub_34_unionType myUnion;
    data = 0;
    data = SHRT_MIN;
    myUnion.unionFirst = data;
    {
        short data = myUnion.unionSecond;
        if (data > SHRT_MIN)
        {
            short result = data - 1;
            printIntLine(result);
        }
        else
        {
            printLine("data value is too large to perform subtraction.");
        }
    }
}
