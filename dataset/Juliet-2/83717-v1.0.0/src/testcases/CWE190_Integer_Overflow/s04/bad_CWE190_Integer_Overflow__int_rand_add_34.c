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
    data = RAND32();
    myUnion.unionFirst = data;
    {
        int data = myUnion.unionSecond;
        {
<START>
            int result = data + 1;
<END>
            printIntLine(result);
        }
    }
}
