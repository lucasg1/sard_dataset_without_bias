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
        data.intOne = 1;
        data.intTwo = 2;
    }
    if(globalReturnsTrueOrFalse())
    {
<START>
        printIntLine(data.intOne);
        printIntLine(data.intTwo);
<END>
    }
    else
    {
        data.intOne = 1;
        data.intTwo = 2;
        printIntLine(data.intOne);
        printIntLine(data.intTwo);
    }
}
} 
