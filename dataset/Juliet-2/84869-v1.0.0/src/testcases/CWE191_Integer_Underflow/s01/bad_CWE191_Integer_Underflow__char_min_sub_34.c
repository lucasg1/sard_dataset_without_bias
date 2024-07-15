typedef union
{
    char unionFirst;
    char unionSecond;
} CWE191_Integer_Underflow__char_min_sub_34_unionType;
void FUN0()
{
    char data;
    CWE191_Integer_Underflow__char_min_sub_34_unionType myUnion;
    data = ' ';
    data = CHAR_MIN;
    myUnion.unionFirst = data;
    {
        char data = myUnion.unionSecond;
        {
<START>
            char result = data - 1;
<END>
            printHexCharLine(result);
        }
    }
}
