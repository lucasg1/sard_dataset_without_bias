void FUN0()
{
    short data;
    data = -1;
    if(globalTrue)
    {
        data = CHAR_MAX + 1;
    }
    {
<START>
        char charData = (char)data;
<END>
        printHexCharLine(charData);
    }
}
