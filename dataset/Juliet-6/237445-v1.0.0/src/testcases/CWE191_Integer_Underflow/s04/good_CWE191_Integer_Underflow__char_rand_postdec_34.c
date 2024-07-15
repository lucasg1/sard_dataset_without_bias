typedef union
{
    char unionFirst;
    char unionSecond;
} CWE191_Integer_Underflow__char_rand_postdec_34_unionType;
void FUN0()
{
    char data;
    CWE191_Integer_Underflow__char_rand_postdec_34_unionType myUnion;
    data = ' ';
    data = -2;
    myUnion.unionFirst = data;
    {
        char data = myUnion.unionSecond;
        {
            data--;
            char result = data;
            printHexCharLine(result);
        }
    }
}
void FUN1()
{
    char data;
    CWE191_Integer_Underflow__char_rand_postdec_34_unionType myUnion;
    data = ' ';
    data = (char)RAND32();
    myUnion.unionFirst = data;
    {
        char data = myUnion.unionSecond;
        if (data > CHAR_MIN)
        {
            data--;
            char result = data;
            printHexCharLine(result);
        }
        else
        {
            printLine("data value is too large to perform arithmetic safely.");
        }
    }
}
