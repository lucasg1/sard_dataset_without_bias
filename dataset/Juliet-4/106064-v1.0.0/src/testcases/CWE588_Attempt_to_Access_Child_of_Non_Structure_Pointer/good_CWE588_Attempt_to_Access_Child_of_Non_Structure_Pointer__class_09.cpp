namespace NAMESPACE0
{
void FUN0()
{
    void * data;
    TwoIntsClass VAR1;
    int VAR2 = 100;
    VAR1.intOne = 0;
    VAR1.intTwo = 0;
    if(GLOBAL_CONST_FALSE)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = &VAR1;
    }
    printIntLine((reinterpret_cast<TwoIntsClass *>(data))->intTwo);
}
void FUN1()
{
    void * data;
    TwoIntsClass VAR1;
    int VAR2 = 100;
    VAR1.intOne = 0;
    VAR1.intTwo = 0;
    if(GLOBAL_CONST_TRUE)
    {
        data = &VAR1;
    }
    printIntLine((reinterpret_cast<TwoIntsClass *>(data))->intTwo);
}
} 
