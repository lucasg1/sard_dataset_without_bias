typedef union
{
    short unionFirst;
    short unionSecond;
} CWE190_Integer_Overflow__short_max_preinc_34_unionType;
void FUN0()
{
    short data;
    CWE190_Integer_Overflow__short_max_preinc_34_unionType myUnion;
    data = 0;
    data = 2;
    myUnion.unionFirst = data;
    {
        short data = myUnion.unionSecond;
        {
            ++data;
            short result = data;
            printIntLine(result);
        }
    }
}
void FUN1()
{
    short data;
    CWE190_Integer_Overflow__short_max_preinc_34_unionType myUnion;
    data = 0;
    data = SHRT_MAX;
    myUnion.unionFirst = data;
    {
        short data = myUnion.unionSecond;
        if (data < SHRT_MAX)
        {
            ++data;
            short result = data;
            printIntLine(result);
        }
        else
        {
            printLine("data value is too large to perform arithmetic safely.");
        }
    }
}
