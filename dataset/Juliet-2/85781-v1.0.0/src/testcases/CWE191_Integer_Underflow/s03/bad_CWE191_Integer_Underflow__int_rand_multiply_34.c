typedef union
{
    int unionFirst;
    int unionSecond;
} CWE191_Integer_Underflow__int_rand_multiply_34_unionType;
void FUN0()
{
    int data;
    CWE191_Integer_Underflow__int_rand_multiply_34_unionType myUnion;
    data = 0;
    data = RAND32();
    myUnion.unionFirst = data;
    {
        int data = myUnion.unionSecond;
        if(data < 0) 
        {
<START>
            int result = data * 2;
<END>
            printIntLine(result);
        }
    }
}
