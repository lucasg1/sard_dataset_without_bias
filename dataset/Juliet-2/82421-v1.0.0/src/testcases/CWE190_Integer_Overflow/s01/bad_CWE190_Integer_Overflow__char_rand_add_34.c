typedef union
{
    char unionFirst;
    char unionSecond;
} CWE190_Integer_Overflow__char_rand_add_34_unionType;
void FUN0()
{
    char data;
    CWE190_Integer_Overflow__char_rand_add_34_unionType myUnion;
    data = ' ';
    data = (char)RAND32();
    myUnion.unionFirst = data;
    {
        char data = myUnion.unionSecond;
        {
<START>
            char result = data + 1;
<END>
            printHexCharLine(result);
        }
    }
}
