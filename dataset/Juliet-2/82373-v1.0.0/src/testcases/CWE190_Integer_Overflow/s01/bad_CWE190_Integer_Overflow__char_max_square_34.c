typedef union
{
    char unionFirst;
    char unionSecond;
} CWE190_Integer_Overflow__char_max_square_34_unionType;
void FUN0()
{
    char data;
    CWE190_Integer_Overflow__char_max_square_34_unionType myUnion;
    data = ' ';
    data = CHAR_MAX;
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
