void FUN0()
{
    int64_t data;
    if(GLOBAL_CONST_TRUE)
    {
        data = 5LL;
    }
    if(GLOBAL_CONST_TRUE)
    {
<START>
        data = 10LL;
<END>
        printLongLongLine(data);
    }
}
