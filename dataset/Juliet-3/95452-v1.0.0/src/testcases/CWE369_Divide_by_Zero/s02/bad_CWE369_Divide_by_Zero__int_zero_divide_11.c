void FUN0()
{
    int data;
    data = -1;
    if(globalReturnsTrue())
    {
        data = 0;
    }
    if(globalReturnsTrue())
    {
<START>
        printIntLine(100 / data);
<END>
    }
}
