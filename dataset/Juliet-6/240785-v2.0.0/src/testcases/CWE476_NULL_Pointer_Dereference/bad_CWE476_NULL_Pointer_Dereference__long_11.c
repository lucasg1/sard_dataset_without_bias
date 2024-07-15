void FUN0()
{
    long * data;
    if(globalReturnsTrue())
    {
        data = NULL;
    }
    if(globalReturnsTrue())
    {
<START>
        printLongLine(*data);
<END>
    }
}
