typedef union
{
    char unionFirst;
    char unionSecond;
} CWE190_Integer_Overflow__char_rand_square_34_unionType;
void FUN0()
{
    char data;
    CWE190_Integer_Overflow__char_rand_square_34_unionType myUnion;
    data = ' ';
    data = (char)RAND32();
    myUnion.unionFirst = data;
    {
        char data = myUnion.unionSecond;
        {
<START>
            char result = data * data;
<END>
            printHexCharLine(result);
        }
    }
}
