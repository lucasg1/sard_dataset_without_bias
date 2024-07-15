void FUN0()
{
    int64_t * data;
    if(globalReturnsTrue())
    {
        data = NULL;
    }
    if(globalReturnsTrue())
    {
<START>
        printLongLongLine(*data);
<END>
    }
}
