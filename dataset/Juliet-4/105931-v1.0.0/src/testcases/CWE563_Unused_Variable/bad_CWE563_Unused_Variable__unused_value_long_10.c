void FUN0()
{
    long data;
    if(globalTrue)
    {
        data = 5L;
    }
    if(globalTrue)
    {
<START>
        data = 10L;
<END>
        printLongLine(data);
    }
}
