void FUN0()
{
    int64_t data;
    if(globalReturnsTrueOrFalse())
    {
        ; 
    }
    else
    {
        data = 5LL;
    }
    if(globalReturnsTrueOrFalse())
    {
<START>
        printLongLongLine(data);
<END>
    }
    else
    {
        data = 5LL;
        printLongLongLine(data);
    }
}
