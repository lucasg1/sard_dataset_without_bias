void FUN0()
{
    int64_t data;
    if(globalReturnsTrue())
    {
        data = 5LL;
    }
    if(globalReturnsTrue())
    {
<START>
        data = 10LL;
<END>
        printLongLongLine(data);
    }
}
