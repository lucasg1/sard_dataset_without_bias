void FUN0()
{
    long data;
    if(globalReturnsTrueOrFalse())
    {
        ; 
    }
    else
    {
        data = 5L;
    }
    if(globalReturnsTrueOrFalse())
    {
<START>
        printLongLine(data);
<END>
    }
    else
    {
        data = 5L;
        printLongLine(data);
    }
}
