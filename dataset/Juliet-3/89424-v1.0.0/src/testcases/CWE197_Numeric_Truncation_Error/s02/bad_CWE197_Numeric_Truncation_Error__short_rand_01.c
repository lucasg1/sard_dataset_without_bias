void FUN0()
{
    short data;
    data = -1;
    data = (short)RAND32();
    {
<START>
        char charData = (char)data;
<END>
        printHexCharLine(charData);
    }
}
