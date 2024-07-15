typedef union
{
    int64_t unionFirst;
    int64_t unionSecond;
} CWE190_Integer_Overflow__int64_t_rand_postinc_34_unionType;
void FUN0()
{
    int64_t data;
    CWE190_Integer_Overflow__int64_t_rand_postinc_34_unionType myUnion;
    data = 0LL;
    data = (int64_t)RAND64();
    myUnion.unionFirst = data;
    {
        int64_t data = myUnion.unionSecond;
        {
<START>
            data++;
<END>
            int64_t result = data;
            printLongLongLine(result);
        }
    }
}
