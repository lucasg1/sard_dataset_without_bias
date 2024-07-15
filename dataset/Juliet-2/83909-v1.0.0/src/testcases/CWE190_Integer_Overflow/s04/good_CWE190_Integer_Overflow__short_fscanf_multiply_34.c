typedef union
{
    short unionFirst;
    short unionSecond;
} CWE190_Integer_Overflow__short_fscanf_multiply_34_unionType;
void FUN0()
{
    short data;
    CWE190_Integer_Overflow__short_fscanf_multiply_34_unionType myUnion;
    data = 0;
    data = 2;
    myUnion.unionFirst = data;
    {
        short data = myUnion.unionSecond;
        if(data > 0) 
        {
            short result = data * 2;
            printIntLine(result);
        }
    }
}
void FUN1()
{
    short data;
    CWE190_Integer_Overflow__short_fscanf_multiply_34_unionType myUnion;
    data = 0;
    fscanf (stdin, "%hd", &data);
    myUnion.unionFirst = data;
    {
        short data = myUnion.unionSecond;
        if(data > 0) 
        {
            if (data < (SHRT_MAX/2))
            {
                short result = data * 2;
                printIntLine(result);
            }
            else
            {
                printLine("data value is too large to perform arithmetic safely.");
            }
        }
    }
}
