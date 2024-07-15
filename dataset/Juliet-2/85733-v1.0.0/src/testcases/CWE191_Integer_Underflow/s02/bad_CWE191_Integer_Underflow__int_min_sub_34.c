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
    data = INT_MIN;
    myUnion.unionFirst = data;
    {
        int data = myUnion.unionSecond;
        {
<START>
            int result = data - 1;
<END>
            printIntLine(result);
        }
    }
}
