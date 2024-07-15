namespace NAMESPACE0
{
void FUN0()
{
    TwoIntsClass data;
    if(globalReturnsTrueOrFalse())
    {
        ; 
    }
    else
    {
        ; 
    }
    if(globalReturnsTrueOrFalse())
    {
        data.intOne = 1;
        data.intTwo = 2;
        printIntLine(data.intOne);
        printIntLine(data.intTwo);
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
    if(globalReturnsTrueOrFalse())
    {
        data.intOne = 1;
        data.intTwo = 2;
    }
    else
    {
        data.intOne = 1;
        data.intTwo = 2;
    }
    if(globalReturnsTrueOrFalse())
    {
        printIntLine(data.intOne);
        printIntLine(data.intTwo);
    }
    else
    {
        printIntLine(data.intOne);
        printIntLine(data.intTwo);
    }
}
} 
