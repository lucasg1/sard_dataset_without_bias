void FUN0()
{
    int i;
    int data;
    data = -1;
    for(i = 0; i < 1; i++)
    {
        data = RAND32();
    }
    {
<START>
        short shortData = (short)data;
<END>
        printShortLine(shortData);
    }
}
