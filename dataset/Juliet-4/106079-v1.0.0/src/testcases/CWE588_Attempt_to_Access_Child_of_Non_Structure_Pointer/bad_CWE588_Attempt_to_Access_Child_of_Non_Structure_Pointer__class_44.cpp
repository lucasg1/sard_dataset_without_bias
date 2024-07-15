namespace NAMESPACE0
{
void FUN0(void * data)
{
<START>
    printIntLine((reinterpret_cast<TwoIntsClass *>(data))->intTwo);
<END>
}
void FUN1()
{
    void * data;
    void (*funcPtr) (void *) = FUN0;
    TwoIntsClass VAR1;
    int VAR2 = 100;
    VAR1.intOne = 0;
    VAR1.intTwo = 0;
    data = &VAR2;
    funcPtr(data);
}
} 
