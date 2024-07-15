void FUN0()
{
    int i,j;
    long data;
    for(i = 0; i < 1; i++)
    {
        data = 5L;
    }
    for(j = 0; j < 1; j++)
    {
<START>
        data = 10L;
<END>
        printLongLine(data);
    }
}
