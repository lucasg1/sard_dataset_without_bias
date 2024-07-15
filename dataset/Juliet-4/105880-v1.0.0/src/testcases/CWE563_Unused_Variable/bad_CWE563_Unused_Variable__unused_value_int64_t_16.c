void FUN0()
{
    int64_t data;
    while(1)
    {
        data = 5LL;
        break;
    }
    while(1)
    {
<START>
        data = 10LL;
<END>
        printLongLongLine(data);
        break;
    }
}
