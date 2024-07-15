void FUN0()
{
    int data;
    if(globalReturnsTrue())
    {
        data = 5;
    }
    if(globalReturnsTrue())
    {
<START>
        data = 10;
<END>
        printIntLine(data);
    }
}
