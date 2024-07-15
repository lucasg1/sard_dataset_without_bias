typedef union
{
    char unionFirst;
    char unionSecond;
} CWE190_Integer_Overflow__char_max_postinc_34_unionType;
void FUN0()
{
    char data;
    CWE190_Integer_Overflow__char_max_postinc_34_unionType myUnion;
    data = ' ';
    data = 2;
    myUnion.unionFirst = data;
    {
        char data = myUnion.unionSecond;
        {
            data++;
            char result = data;
            printHexCharLine(result);
        }
    }
}
void FUN1()
{
    char data;
    CWE190_Integer_Overflow__char_max_postinc_34_unionType myUnion;
    data = ' ';
    data = CHAR_MAX;
    myUnion.unionFirst = data;
    {
        char data = myUnion.unionSecond;
        if (data < CHAR_MAX)
        {
            data++;
            char result = data;
            printHexCharLine(result);
        }
        else
        {
            printLine("data value is too large to perform arithmetic safely.");
        }
    }
}
