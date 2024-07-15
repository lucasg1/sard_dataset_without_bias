namespace NAMESPACE0
{
void FUN0()
{
    TwoIntsClass data;
    if(globalTrue)
    {
        ; 
    }
    if(globalFalse)
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
    if(globalTrue)
    {
        ; 
    }
    if(globalTrue)
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
    if(globalFalse)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data.intOne = 1;
        data.intTwo = 2;
    }
    if(globalTrue)
    {
        printIntLine(data.intOne);
        printIntLine(data.intTwo);
    }
}
void FUN3()
{
    TwoIntsClass data;
    if(globalTrue)
    {
        data.intOne = 1;
        data.intTwo = 2;
    }
    if(globalTrue)
    {
        printIntLine(data.intOne);
        printIntLine(data.intTwo);
    }
}
} 
