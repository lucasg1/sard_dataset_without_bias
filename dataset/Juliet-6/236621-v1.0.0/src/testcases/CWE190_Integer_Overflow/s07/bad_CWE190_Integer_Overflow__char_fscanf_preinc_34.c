typedef union
{
    char unionFirst;
    char unionSecond;
} CWE190_Integer_Overflow__char_fscanf_preinc_34_unionType;
void FUN0()
{
    char data;
    CWE190_Integer_Overflow__char_fscanf_preinc_34_unionType myUnion;
    data = ' ';
    fscanf (stdin, "%c", &data);
    myUnion.unionFirst = data;
    {
        char data = myUnion.unionSecond;
        {
<START>
            ++data;
<END>
            char result = data;
            printHexCharLine(result);
        }
    }
}
