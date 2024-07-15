typedef union
{
    char unionFirst;
    char unionSecond;
} CWE191_Integer_Underflow__char_fscanf_multiply_34_unionType;
void FUN0()
{
    char data;
    CWE191_Integer_Underflow__char_fscanf_multiply_34_unionType myUnion;
    data = ' ';
    data = -2;
    myUnion.unionFirst = data;
    {
        char data = myUnion.unionSecond;
        if(data < 0) 
        {
            char result = data * 2;
            printHexCharLine(result);
        }
    }
}
void FUN1()
{
    char data;
    CWE191_Integer_Underflow__char_fscanf_multiply_34_unionType myUnion;
    data = ' ';
    fscanf (stdin, "%c", &data);
    myUnion.unionFirst = data;
    {
        char data = myUnion.unionSecond;
        if(data < 0) 
        {
            if (data > (CHAR_MIN/2))
            {
                char result = data * 2;
                printHexCharLine(result);
            }
            else
            {
                printLine("data value is too small to perform multiplication.");
            }
        }
    }
}
