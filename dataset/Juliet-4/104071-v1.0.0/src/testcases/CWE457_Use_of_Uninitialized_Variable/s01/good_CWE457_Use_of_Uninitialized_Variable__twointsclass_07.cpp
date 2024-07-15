static int staticFive = 5;
namespace NAMESPACE0
{
void FUN0()
{
    TwoIntsClass data;
    if(staticFive==5)
    {
        ; 
    }
    if(staticFive!=5)
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
void FUN1()
{
    TwoIntsClass data;
    if(staticFive==5)
    {
        ; 
    }
    if(staticFive==5)
    {
        data.intOne = 1;
        data.intTwo = 2;
        printIntLine(data.intOne);
        printIntLine(data.intTwo);
    }
}
void FUN2()
{
    TwoIntsClass data;
    if(staticFive!=5)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data.intOne = 1;
        data.intTwo = 2;
    }
    if(staticFive==5)
    {
        printIntLine(data.intOne);
        printIntLine(data.intTwo);
    }
}
void FUN3()
{
    TwoIntsClass data;
    if(staticFive==5)
    {
        data.intOne = 1;
        data.intTwo = 2;
    }
    if(staticFive==5)
    {
        printIntLine(data.intOne);
        printIntLine(data.intTwo);
    }
}
} 
