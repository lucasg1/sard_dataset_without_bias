typedef union
{
    char unionFirst;
    char unionSecond;
} CWE191_Integer_Underflow__char_rand_predec_34_unionType;
void FUN0()
{
    char data;
    CWE191_Integer_Underflow__char_rand_predec_34_unionType myUnion;
    data = ' ';
    data = (char)RAND32();
    myUnion.unionFirst = data;
    {
        char data = myUnion.unionSecond;
        {
<START>
            --data;
<END>
            char result = data;
            printHexCharLine(result);
        }
    }
}
