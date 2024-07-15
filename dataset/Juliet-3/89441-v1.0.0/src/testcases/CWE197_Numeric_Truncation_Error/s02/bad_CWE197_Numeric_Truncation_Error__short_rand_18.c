void FUN0()
{
    short data;
    data = -1;
    goto source;
source:
    data = (short)RAND32();
    {
<START>
        char charData = (char)data;
<END>
        printHexCharLine(charData);
    }
}
