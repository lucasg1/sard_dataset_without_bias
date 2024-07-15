typedef union
{
    int unionFirst;
    int unionSecond;
} CWE190_Integer_Overflow__int_rand_postinc_34_unionType;
void FUN0()
{
    int data;
    CWE190_Integer_Overflow__int_rand_postinc_34_unionType myUnion;
    data = 0;
    data = 2;
    myUnion.unionFirst = data;
    {
        int data = myUnion.unionSecond;
        {
            data++;
            int result = data;
            printIntLine(result);
        }
    }
}
void FUN1()
{
    int data;
    CWE190_Integer_Overflow__int_rand_postinc_34_unionType myUnion;
    data = 0;
    data = RAND32();
    myUnion.unionFirst = data;
    {
        int data = myUnion.unionSecond;
        if (data < INT_MAX)
        {
            data++;
            int result = data;
            printIntLine(result);
        }
        else
        {
            printLine("data value is too large to perform arithmetic safely.");
        }
    }
}
