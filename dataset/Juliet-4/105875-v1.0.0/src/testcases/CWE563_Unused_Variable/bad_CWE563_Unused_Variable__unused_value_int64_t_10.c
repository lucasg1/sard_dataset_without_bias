void FUN0()
{
    int64_t data;
    if(globalTrue)
    {
        data = 5LL;
    }
    if(globalTrue)
    {
<START>
        data = 10LL;
<END>
        printLongLongLine(data);
    }
}
