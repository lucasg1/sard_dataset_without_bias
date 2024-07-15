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
    data = SHRT_MAX;
    myUnion.unionFirst = data;
    {
        short data = myUnion.unionSecond;
        {
<START>
            ++data;
<END>
            short result = data;
            printIntLine(result);
        }
    }
}
