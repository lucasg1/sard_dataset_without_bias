typedef union
{
    char unionFirst;
    char unionSecond;
} CWE190_Integer_Overflow__char_fscanf_multiply_34_unionType;
void FUN0()
{
    char data;
    CWE190_Integer_Overflow__char_fscanf_multiply_34_unionType myUnion;
    data = ' ';
    data = 2;
    myUnion.unionFirst = data;
    {
        char data = myUnion.unionSecond;
        if(data > 0) 
        {
            char result = data * 2;
            printHexCharLine(result);
        }
    }
}
void FUN1()
{
    char data;
    CWE190_Integer_Overflow__char_fscanf_multiply_34_unionType myUnion;
    data = ' ';
    fscanf (stdin, "%c", &data);
    myUnion.unionFirst = data;
    {
        char data = myUnion.unionSecond;
        if(data > 0) 
        {
            if (data < (CHAR_MAX/2))
            {
                char result = data * 2;
                printHexCharLine(result);
            }
            else
            {
                printLine("data value is too large to perform arithmetic safely.");
            }
        }
    }
}
