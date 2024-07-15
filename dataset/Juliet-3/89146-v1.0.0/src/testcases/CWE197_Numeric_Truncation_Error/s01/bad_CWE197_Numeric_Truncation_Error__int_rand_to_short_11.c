void FUN0()
{
    int data;
    data = -1;
    if(globalReturnsTrue())
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
