void FUN0()
{
    int64_t data;
    if(GLOBAL_CONST_FIVE==5)
    {
        data = 5LL;
    }
    if(GLOBAL_CONST_FIVE==5)
    {
<START>
        data = 10LL;
<END>
        printLongLongLine(data);
    }
}
