typedef union
{
    int unionFirst;
    int unionSecond;
} CWE369_Divide_by_Zero__int_rand_modulo_34_unionType;
void FUN0()
{
    int data;
    CWE369_Divide_by_Zero__int_rand_modulo_34_unionType myUnion;
    data = -1;
    data = RAND32();
    myUnion.unionFirst = data;
    {
        int data = myUnion.unionSecond;
<START>
        printIntLine(100 % data);
<END>
    }
}
