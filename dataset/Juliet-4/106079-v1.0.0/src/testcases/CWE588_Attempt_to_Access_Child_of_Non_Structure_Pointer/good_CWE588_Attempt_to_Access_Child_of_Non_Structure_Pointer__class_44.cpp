namespace NAMESPACE0
{
void FUN0(void * data)
{
    printIntLine((reinterpret_cast<TwoIntsClass *>(data))->intTwo);
}
void FUN1()
{
    void * data;
    void (*funcPtr) (void *) = FUN0;
    TwoIntsClass VAR1;
    int VAR2 = 100;
    VAR1.intOne = 0;
    VAR1.intTwo = 0;
    data = &VAR1;
    funcPtr(data);
}
} 
