static int FUN0()
{
    return 1;
}
static int FUN1()
{
    return 0;
}
namespace NAMESPACE0
{
void FUN2()
{
    void * data;
    TwoIntsClass VAR1;
    int VAR2 = 100;
    VAR1.intOne = 0;
    VAR1.intTwo = 0;
    if(FUN1())
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = &VAR1;
    }
    printIntLine((reinterpret_cast<TwoIntsClass *>(data))->intTwo);
}
void FUN3()
{
    void * data;
    TwoIntsClass VAR1;
    int VAR2 = 100;
    VAR1.intOne = 0;
    VAR1.intTwo = 0;
    if(FUN0())
    {
        data = &VAR1;
    }
    printIntLine((reinterpret_cast<TwoIntsClass *>(data))->intTwo);
}
} 
