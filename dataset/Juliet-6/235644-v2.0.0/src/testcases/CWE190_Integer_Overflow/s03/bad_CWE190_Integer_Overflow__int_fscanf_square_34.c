typedef union
{
    int unionFirst;
    int unionSecond;
} CWE190_Integer_Overflow__int_fscanf_square_34_unionType;
void FUN0()
{
    int data;
    CWE190_Integer_Overflow__int_fscanf_square_34_unionType myUnion;
    data = 0;
    fscanf(stdin, "%d", &data);
    myUnion.unionFirst = data;
    {
        int data = myUnion.unionSecond;
        {
<START>
            int result = data * data;
<END>
            printIntLine(result);
        }
    }
}
