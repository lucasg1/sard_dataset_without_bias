typedef union
{
    int64_t unionFirst;
    int64_t unionSecond;
} CWE190_Integer_Overflow__int64_t_rand_add_34_unionType;
void FUN0()
{
    int64_t data;
    CWE190_Integer_Overflow__int64_t_rand_add_34_unionType myUnion;
    data = 0LL;
    data = 2;
    myUnion.unionFirst = data;
    {
        int64_t data = myUnion.unionSecond;
        {
            int64_t result = data + 1;
            printLongLongLine(result);
        }
    }
}
void FUN1()
{
    int64_t data;
    CWE190_Integer_Overflow__int64_t_rand_add_34_unionType myUnion;
    data = 0LL;
    data = (int64_t)RAND64();
    myUnion.unionFirst = data;
    {
        int64_t data = myUnion.unionSecond;
        if (data < LLONG_MAX)
        {
            int64_t result = data + 1;
            printLongLongLine(result);
        }
        else
        {
            printLine("data value is too large to perform arithmetic safely.");
        }
    }
}
