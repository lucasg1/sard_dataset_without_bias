void FUN0()
{
    int i,j;
    int64_t data;
    for(i = 0; i < 1; i++)
    {
        data = 5LL;
    }
    for(j = 0; j < 1; j++)
    {
<START>
        data = 10LL;
<END>
        printLongLongLine(data);
    }
}
