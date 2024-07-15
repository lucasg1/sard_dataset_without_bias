void FUN0()
{
    int data;
    data = -1;
    if(globalReturnsTrueOrFalse())
    {
        data = SHRT_MAX + 5;
    }
    else
    {
        data = CHAR_MAX-5;
    }
    {
<START>
        short shortData = (short)data;
<END>
        printShortLine(shortData);
    }
}
