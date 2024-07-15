typedef union
{
    char unionFirst;
    char unionSecond;
} CWE190_Integer_Overflow__char_rand_preinc_34_unionType;
void FUN0()
{
    char data;
    CWE190_Integer_Overflow__char_rand_preinc_34_unionType myUnion;
    data = ' ';
    data = 2;
    myUnion.unionFirst = data;
    {
        char data = myUnion.unionSecond;
        {
            ++data;
            char result = data;
            printHexCharLine(result);
        }
    }
}
void FUN1()
{
    char data;
    CWE190_Integer_Overflow__char_rand_preinc_34_unionType myUnion;
    data = ' ';
    data = (char)RAND32();
    myUnion.unionFirst = data;
    {
        char data = myUnion.unionSecond;
        if (data < CHAR_MAX)
        {
            ++data;
            char result = data;
            printHexCharLine(result);
        }
        else
        {
            printLine("data value is too large to perform arithmetic safely.");
        }
    }
}
