namespace NAMESPACE0
{
void * VAR1;
void * VAR2;
void FUN0()
{
    void * data = VAR2;
    printIntLine((reinterpret_cast<TwoIntsClass *>(data))->intTwo);
}
void FUN1()
{
    void * data;
    TwoIntsClass VAR3;
    int VAR4 = 100;
    VAR3.intOne = 0;
    VAR3.intTwo = 0;
    data = &VAR3;
    VAR2 = data;
    FUN0();
}
} 
