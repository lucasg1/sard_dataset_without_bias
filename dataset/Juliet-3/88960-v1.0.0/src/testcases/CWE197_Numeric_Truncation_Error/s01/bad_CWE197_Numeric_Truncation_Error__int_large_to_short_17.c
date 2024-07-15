void FUN0()
{
    int i;
    int data;
    data = -1;
    for(i = 0; i < 1; i++)
    {
        data = SHRT_MAX + 5;
    }
    {
<START>
        short shortData = (short)data;
<END>
        printShortLine(shortData);
    }
}
