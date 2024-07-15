void FUN0()
{
    short data;
    data = -1;
    while(1)
    {
        data = (short)RAND32();
        break;
    }
    {
<START>
        char charData = (char)data;
<END>
        printHexCharLine(charData);
    }
}
