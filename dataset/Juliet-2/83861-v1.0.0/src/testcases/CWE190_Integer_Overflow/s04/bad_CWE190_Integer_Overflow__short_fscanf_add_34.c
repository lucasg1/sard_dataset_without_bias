typedef union
{
    short unionFirst;
    short unionSecond;
} CWE190_Integer_Overflow__short_fscanf_add_34_unionType;
void FUN0()
{
    short data;
    CWE190_Integer_Overflow__short_fscanf_add_34_unionType myUnion;
    data = 0;
    fscanf (stdin, "%hd", &data);
    myUnion.unionFirst = data;
    {
        short data = myUnion.unionSecond;
        {
<START>
            short result = data + 1;
<END>
            printIntLine(result);
        }
    }
}
