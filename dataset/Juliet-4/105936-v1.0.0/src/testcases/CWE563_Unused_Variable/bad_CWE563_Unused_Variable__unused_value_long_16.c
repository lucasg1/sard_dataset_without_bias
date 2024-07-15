void FUN0()
{
    long data;
    while(1)
    {
        data = 5L;
        break;
    }
    while(1)
    {
<START>
        data = 10L;
<END>
        printLongLine(data);
        break;
    }
}
