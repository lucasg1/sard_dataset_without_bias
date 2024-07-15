typedef union
{
    int unionFirst;
    int unionSecond;
} CWE191_Integer_Underflow__int_min_sub_34_unionType;
void FUN0()
{
    int data;
    CWE191_Integer_Underflow__int_min_sub_34_unionType myUnion;
    data = 0;
    data = -2;
    myUnion.unionFirst = data;
    {
        int data = myUnion.unionSecond;
        {
            int result = data - 1;
            printIntLine(result);
        }
    }
}
void FUN1()
{
    int data;
    CWE191_Integer_Underflow__int_min_sub_34_unionType myUnion;
    data = 0;
    data = INT_MIN;
    myUnion.unionFirst = data;
    {
        int data = myUnion.unionSecond;
        if (data > INT_MIN)
        {
            int result = data - 1;
            printIntLine(result);
        }
        else
        {
            printLine("data value is too large to perform subtraction.");
        }
    }
}
