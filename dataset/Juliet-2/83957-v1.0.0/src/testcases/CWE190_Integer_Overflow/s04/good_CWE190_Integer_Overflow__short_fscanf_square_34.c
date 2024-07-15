typedef union
{
    short unionFirst;
    short unionSecond;
} CWE190_Integer_Overflow__short_fscanf_square_34_unionType;
void FUN0()
{
    short data;
    CWE190_Integer_Overflow__short_fscanf_square_34_unionType myUnion;
    data = 0;
    data = 2;
    myUnion.unionFirst = data;
    {
        short data = myUnion.unionSecond;
        {
            short result = data * data;
            printIntLine(result);
        }
    }
}
void FUN1()
{
    short data;
    CWE190_Integer_Overflow__short_fscanf_square_34_unionType myUnion;
    data = 0;
    fscanf (stdin, "%hd", &data);
    myUnion.unionFirst = data;
    {
        short data = myUnion.unionSecond;
        if (abs((long)data) <= (long)sqrt((double)SHRT_MAX))
        {
            short result = data * data;
            printIntLine(result);
        }
        else
        {
            printLine("data value is too large to perform arithmetic safely.");
        }
    }
}
