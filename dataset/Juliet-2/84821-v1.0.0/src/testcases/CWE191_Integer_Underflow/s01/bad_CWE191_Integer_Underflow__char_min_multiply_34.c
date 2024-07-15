typedef union
{
    char unionFirst;
    char unionSecond;
} CWE191_Integer_Underflow__char_min_multiply_34_unionType;
void FUN0()
{
    char data;
    CWE191_Integer_Underflow__char_min_multiply_34_unionType myUnion;
    data = ' ';
    data = CHAR_MIN;
    myUnion.unionFirst = data;
    {
        char data = myUnion.unionSecond;
        if(data < 0) 
        {
<START>
            char result = data * 2;
<END>
            printHexCharLine(result);
        }
    }
}
