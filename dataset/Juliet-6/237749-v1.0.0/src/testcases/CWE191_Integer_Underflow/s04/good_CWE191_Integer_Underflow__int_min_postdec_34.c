typedef union
{
    int unionFirst;
    int unionSecond;
} CWE191_Integer_Underflow__int_min_postdec_34_unionType;
void FUN0()
{
    int data;
    CWE191_Integer_Underflow__int_min_postdec_34_unionType myUnion;
    data = 0;
    data = -2;
    myUnion.unionFirst = data;
    {
        int data = myUnion.unionSecond;
        {
            data--;
            int result = data;
            printIntLine(result);
        }
    }
}
void FUN1()
{
    int data;
    CWE191_Integer_Underflow__int_min_postdec_34_unionType myUnion;
    data = 0;
    data = INT_MIN;
    myUnion.unionFirst = data;
    {
        int data = myUnion.unionSecond;
        if (data > INT_MIN)
        {
            data--;
            int result = data;
            printIntLine(result);
        }
        else
        {
            printLine("data value is too large to perform arithmetic safely.");
        }
    }
}
