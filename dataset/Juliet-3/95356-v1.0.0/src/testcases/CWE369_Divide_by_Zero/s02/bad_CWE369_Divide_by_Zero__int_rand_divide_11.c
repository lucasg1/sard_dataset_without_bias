void FUN0()
{
    int data;
    data = -1;
    if(globalReturnsTrue())
    {
        data = RAND32();
    }
    if(globalReturnsTrue())
    {
<START>
        printIntLine(100 / data);
<END>
    }
}
