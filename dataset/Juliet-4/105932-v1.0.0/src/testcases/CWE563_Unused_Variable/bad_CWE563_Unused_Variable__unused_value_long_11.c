void FUN0()
{
    long data;
    if(globalReturnsTrue())
    {
        data = 5L;
    }
    if(globalReturnsTrue())
    {
<START>
        data = 10L;
<END>
        printLongLine(data);
    }
}
