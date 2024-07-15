namespace NAMESPACE0
{
void FUN0()
{
    TwoIntsClass data;
    if(globalReturnsTrue())
    {
        ; 
    }
    if(globalReturnsFalse())
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
    if(globalReturnsTrue())
    {
        ; 
    }
    if(globalReturnsTrue())
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
    if(globalReturnsFalse())
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data.intOne = 1;
        data.intTwo = 2;
    }
    if(globalReturnsTrue())
    {
        printIntLine(data.intOne);
        printIntLine(data.intTwo);
    }
}
void FUN3()
{
    TwoIntsClass data;
    if(globalReturnsTrue())
    {
        data.intOne = 1;
        data.intTwo = 2;
    }
    if(globalReturnsTrue())
    {
        printIntLine(data.intOne);
        printIntLine(data.intTwo);
    }
}
} 
