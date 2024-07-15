static int staticTrue = 1; 
static int staticFalse = 0; 
namespace NAMESPACE0
{
void FUN0()
{
    TwoIntsClass data;
    if(staticTrue)
    {
        ; 
    }
    if(staticFalse)
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
    if(staticTrue)
    {
        ; 
    }
    if(staticTrue)
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
    if(staticFalse)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data.intOne = 1;
        data.intTwo = 2;
    }
    if(staticTrue)
    {
        printIntLine(data.intOne);
        printIntLine(data.intTwo);
    }
}
void FUN3()
{
    TwoIntsClass data;
    if(staticTrue)
    {
        data.intOne = 1;
        data.intTwo = 2;
    }
    if(staticTrue)
    {
        printIntLine(data.intOne);
        printIntLine(data.intTwo);
    }
}
} 
