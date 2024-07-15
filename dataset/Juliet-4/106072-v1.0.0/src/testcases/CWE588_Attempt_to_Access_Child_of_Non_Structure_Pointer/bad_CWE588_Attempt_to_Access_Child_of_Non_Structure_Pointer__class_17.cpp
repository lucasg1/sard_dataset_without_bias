namespace NAMESPACE0
{
void FUN0()
{
    int i;
    void * data;
    TwoIntsClass VAR1;
    int VAR2 = 100;
    VAR1.intOne = 0;
    VAR1.intTwo = 0;
    for(i = 0; i < 1; i++)
    {
        data = &VAR2;
    }
<START>
    printIntLine((reinterpret_cast<TwoIntsClass *>(data))->intTwo);
<END>
}
} 
