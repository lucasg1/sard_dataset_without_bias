typedef union
{
    short unionFirst;
    short unionSecond;
} CWE190_Integer_Overflow__short_rand_multiply_34_unionType;
void FUN0()
{
    short data;
    CWE190_Integer_Overflow__short_rand_multiply_34_unionType myUnion;
    data = 0;
    data = (short)RAND32();
    myUnion.unionFirst = data;
    {
        short data = myUnion.unionSecond;
        if(data > 0) 
        {
<START>
            short result = data * 2;
<END>
            printIntLine(result);
        }
    }
}
