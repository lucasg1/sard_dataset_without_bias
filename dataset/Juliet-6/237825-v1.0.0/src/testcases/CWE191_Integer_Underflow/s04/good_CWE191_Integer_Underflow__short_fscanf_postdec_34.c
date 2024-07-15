typedef union
{
    short unionFirst;
    short unionSecond;
} CWE191_Integer_Underflow__short_fscanf_postdec_34_unionType;
void FUN0()
{
    short data;
    CWE191_Integer_Underflow__short_fscanf_postdec_34_unionType myUnion;
    data = 0;
    data = -2;
    myUnion.unionFirst = data;
    {
        short data = myUnion.unionSecond;
        {
            data--;
            short result = data;
            printIntLine(result);
        }
    }
}
void FUN1()
{
    short data;
    CWE191_Integer_Underflow__short_fscanf_postdec_34_unionType myUnion;
    data = 0;
    fscanf (stdin, "%hd", &data);
    myUnion.unionFirst = data;
    {
        short data = myUnion.unionSecond;
        if (data > SHRT_MIN)
        {
            data--;
            short result = data;
            printIntLine(result);
        }
        else
        {
            printLine("data value is too large to perform arithmetic safely.");
        }
    }
}
