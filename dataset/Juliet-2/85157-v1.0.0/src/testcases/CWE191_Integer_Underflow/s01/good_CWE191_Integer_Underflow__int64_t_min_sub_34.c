typedef union
{
    int64_t unionFirst;
    int64_t unionSecond;
} CWE191_Integer_Underflow__int64_t_min_sub_34_unionType;
void FUN0()
{
    int64_t data;
    CWE191_Integer_Underflow__int64_t_min_sub_34_unionType myUnion;
    data = 0LL;
    data = -2;
    myUnion.unionFirst = data;
    {
        int64_t data = myUnion.unionSecond;
        {
            int64_t result = data - 1;
            printLongLongLine(result);
        }
    }
}
void FUN1()
{
    int64_t data;
    CWE191_Integer_Underflow__int64_t_min_sub_34_unionType myUnion;
    data = 0LL;
    data = LLONG_MIN;
    myUnion.unionFirst = data;
    {
        int64_t data = myUnion.unionSecond;
        if (data > LLONG_MIN)
        {
            int64_t result = data - 1;
            printLongLongLine(result);
        }
        else
        {
            printLine("data value is too large to perform subtraction.");
        }
    }
}
