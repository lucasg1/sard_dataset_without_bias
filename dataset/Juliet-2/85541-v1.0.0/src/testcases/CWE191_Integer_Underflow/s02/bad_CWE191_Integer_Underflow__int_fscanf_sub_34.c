typedef union
{
    int unionFirst;
    int unionSecond;
} CWE191_Integer_Underflow__int_fscanf_sub_34_unionType;
void FUN0()
{
    int data;
    CWE191_Integer_Underflow__int_fscanf_sub_34_unionType myUnion;
    data = 0;
    fscanf(stdin, "%d", &data);
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
