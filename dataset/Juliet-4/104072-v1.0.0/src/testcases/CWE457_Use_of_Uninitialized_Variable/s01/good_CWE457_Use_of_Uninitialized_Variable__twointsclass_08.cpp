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
    TwoIntsClass data;
    if(FUN0())
    {
        ; 
    }
    if(FUN1())
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data.intOne = 1;
        data.intTwo = 2;
        printIntLine(data.intOne);
        printIntLine(data.intTwo);
    }
}
void FUN3()
{
    TwoIntsClass data;
    if(FUN0())
    {
        ; 
    }
    if(FUN0())
    {
        data.intOne = 1;
        data.intTwo = 2;
        printIntLine(data.intOne);
        printIntLine(data.intTwo);
    }
}
void FUN4()
{
    TwoIntsClass data;
    if(FUN1())
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data.intOne = 1;
        data.intTwo = 2;
    }
    if(FUN0())
    {
        printIntLine(data.intOne);
        printIntLine(data.intTwo);
    }
}
void FUN5()
{
    TwoIntsClass data;
    if(FUN0())
    {
        data.intOne = 1;
        data.intTwo = 2;
    }
    if(FUN0())
    {
        printIntLine(data.intOne);
        printIntLine(data.intTwo);
    }
}
} 
