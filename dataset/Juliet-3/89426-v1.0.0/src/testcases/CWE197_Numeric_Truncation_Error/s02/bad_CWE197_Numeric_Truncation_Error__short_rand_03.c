void FUN0()
{
    short data;
    data = -1;
    if(5==5)
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
