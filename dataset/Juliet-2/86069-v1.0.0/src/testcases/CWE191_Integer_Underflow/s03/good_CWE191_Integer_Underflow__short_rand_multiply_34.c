typedef union
{
    short unionFirst;
    short unionSecond;
} CWE191_Integer_Underflow__short_rand_multiply_34_unionType;
void FUN0()
{
    short data;
    CWE191_Integer_Underflow__short_rand_multiply_34_unionType myUnion;
    data = 0;
    data = -2;
    myUnion.unionFirst = data;
    {
        short data = myUnion.unionSecond;
        if(data < 0) 
        {
            short result = data * 2;
            printIntLine(result);
        }
    }
}
void FUN1()
{
    short data;
    CWE191_Integer_Underflow__short_rand_multiply_34_unionType myUnion;
    data = 0;
    data = (short)RAND32();
    myUnion.unionFirst = data;
    {
        short data = myUnion.unionSecond;
        if(data < 0) 
        {
            if (data > (SHRT_MIN/2))
            {
                short result = data * 2;
                printIntLine(result);
            }
            else
            {
                printLine("data value is too small to perform multiplication.");
            }
        }
    }
}
