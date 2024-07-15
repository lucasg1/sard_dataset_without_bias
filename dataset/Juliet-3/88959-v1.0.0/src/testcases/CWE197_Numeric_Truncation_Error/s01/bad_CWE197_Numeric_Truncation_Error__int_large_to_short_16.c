void FUN0()
{
    int data;
    data = -1;
    while(1)
    {
        data = SHRT_MAX + 5;
        break;
    }
    {
<START>
        short shortData = (short)data;
<END>
        printShortLine(shortData);
    }
}
