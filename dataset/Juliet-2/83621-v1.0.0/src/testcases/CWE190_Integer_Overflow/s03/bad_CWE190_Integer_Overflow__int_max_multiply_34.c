typedef union
{
    int unionFirst;
    int unionSecond;
} CWE190_Integer_Overflow__int_max_multiply_34_unionType;
void FUN0()
{
    int data;
    CWE190_Integer_Overflow__int_max_multiply_34_unionType myUnion;
    data = 0;
    data = INT_MAX;
    myUnion.unionFirst = data;
    {
        int data = myUnion.unionSecond;
        if(data > 0) 
        {
<START>
            int result = data * 2;
<END>
            printIntLine(result);
        }
    }
}
