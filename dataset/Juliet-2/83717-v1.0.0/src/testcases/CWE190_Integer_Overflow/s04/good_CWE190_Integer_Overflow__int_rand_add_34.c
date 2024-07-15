typedef union
{
    int unionFirst;
    int unionSecond;
} CWE190_Integer_Overflow__int_rand_add_34_unionType;
void FUN0()
{
    int data;
    CWE190_Integer_Overflow__int_rand_add_34_unionType myUnion;
    data = 0;
    data = 2;
    myUnion.unionFirst = data;
    {
        int data = myUnion.unionSecond;
        {
            int result = data + 1;
            printIntLine(result);
        }
    }
}
void FUN1()
{
    int data;
    CWE190_Integer_Overflow__int_rand_add_34_unionType myUnion;
    data = 0;
    data = RAND32();
    myUnion.unionFirst = data;
    {
        int data = myUnion.unionSecond;
        if (data < INT_MAX)
        {
            int result = data + 1;
            printIntLine(result);
        }
        else
        {
            printLine("data value is too large to perform arithmetic safely.");
        }
    }
}
