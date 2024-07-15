void FUN0()
{
    int data;
    if(globalReturnsTrueOrFalse())
    {
        ; 
    }
    else
    {
        data = 5;
    }
    if(globalReturnsTrueOrFalse())
    {
<START>
        printIntLine(data);
<END>
    }
    else
    {
        data = 5;
        printIntLine(data);
    }
}
