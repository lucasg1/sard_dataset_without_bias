typedef union
{
    int64_t unionFirst;
    int64_t unionSecond;
} CWE191_Integer_Underflow__int64_t_min_multiply_34_unionType;
void FUN0()
{
    int64_t data;
    CWE191_Integer_Underflow__int64_t_min_multiply_34_unionType myUnion;
    data = 0LL;
    data = -2;
    myUnion.unionFirst = data;
    {
        int64_t data = myUnion.unionSecond;
        if(data < 0) 
        {
            int64_t result = data * 2;
            printLongLongLine(result);
        }
    }
}
void FUN1()
{
    int64_t data;
    CWE191_Integer_Underflow__int64_t_min_multiply_34_unionType myUnion;
    data = 0LL;
    data = LLONG_MIN;
    myUnion.unionFirst = data;
    {
        int64_t data = myUnion.unionSecond;
        if(data < 0) 
        {
            if (data > (LLONG_MIN/2))
            {
                int64_t result = data * 2;
                printLongLongLine(result);
            }
            else
            {
                printLine("data value is too small to perform multiplication.");
            }
        }
    }
}