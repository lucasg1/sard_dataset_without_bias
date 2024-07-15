void FUN0()
{
    int data;
    data = -1;
    if(globalFive==5)
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
