void FUN0()
{
    short data;
    data = -1;
    if(globalReturnsTrue())
    {
        data = (short)RAND32();
    }
    {
<START>
        char charData = (char)data;
<END>
        printHexCharLine(charData);
    }
}
