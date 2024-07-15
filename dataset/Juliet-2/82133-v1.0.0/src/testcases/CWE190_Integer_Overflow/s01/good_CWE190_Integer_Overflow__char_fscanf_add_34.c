typedef union
{
    char unionFirst;
    char unionSecond;
} CWE190_Integer_Overflow__char_fscanf_add_34_unionType;
void FUN0()
{
    char data;
    CWE190_Integer_Overflow__char_fscanf_add_34_unionType myUnion;
    data = ' ';
    data = 2;
    myUnion.unionFirst = data;
    {
        char data = myUnion.unionSecond;
        {
            char result = data + 1;
            printHexCharLine(result);
        }
    }
}
void FUN1()
{
    char data;
    CWE190_Integer_Overflow__char_fscanf_add_34_unionType myUnion;
    data = ' ';
    fscanf (stdin, "%c", &data);
    myUnion.unionFirst = data;
    {
        char data = myUnion.unionSecond;
        if (data < CHAR_MAX)
        {
            char result = data + 1;
            printHexCharLine(result);
        }
        else
        {
            printLine("data value is too large to perform arithmetic safely.");
        }
    }
}
