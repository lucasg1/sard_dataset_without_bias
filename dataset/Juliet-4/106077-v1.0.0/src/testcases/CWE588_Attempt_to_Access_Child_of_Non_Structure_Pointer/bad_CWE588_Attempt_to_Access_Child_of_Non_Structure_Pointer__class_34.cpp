namespace NAMESPACE0
{
typedef union
{
    void * unionFirst;
    void * unionSecond;
} unionType;
void FUN0()
{
    void * data;
    unionType myUnion;
    TwoIntsClass VAR1;
    int VAR2 = 100;
    VAR1.intOne = 0;
    VAR1.intTwo = 0;
    data = &VAR2;
    myUnion.unionFirst = data;
    {
        void * data = myUnion.unionSecond;
<START>
        printIntLine((reinterpret_cast<TwoIntsClass *>(data))->intTwo);
<END>
    }
}
} 
