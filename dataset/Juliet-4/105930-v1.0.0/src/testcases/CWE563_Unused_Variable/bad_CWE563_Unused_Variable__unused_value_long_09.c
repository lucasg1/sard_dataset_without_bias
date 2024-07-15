void FUN0()
{
    long data;
    if(GLOBAL_CONST_TRUE)
    {
        data = 5L;
    }
    if(GLOBAL_CONST_TRUE)
    {
<START>
        data = 10L;
<END>
        printLongLine(data);
    }
}
