typedef union
{
    int unionFirst;
    int unionSecond;
} CWE369_Divide_by_Zero__int_zero_modulo_34_unionType;
void FUN0()
{
    int data;
    CWE369_Divide_by_Zero__int_zero_modulo_34_unionType myUnion;
    data = -1;
    data = 0;
    myUnion.unionFirst = data;
    {
        int data = myUnion.unionSecond;
<START>
        printIntLine(100 % data);
<END>
    }
}
