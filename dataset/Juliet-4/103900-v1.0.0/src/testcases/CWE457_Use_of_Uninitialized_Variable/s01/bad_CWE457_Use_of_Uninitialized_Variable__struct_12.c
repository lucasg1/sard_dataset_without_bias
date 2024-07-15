void FUN0()
{
    twoIntsStruct data;
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
