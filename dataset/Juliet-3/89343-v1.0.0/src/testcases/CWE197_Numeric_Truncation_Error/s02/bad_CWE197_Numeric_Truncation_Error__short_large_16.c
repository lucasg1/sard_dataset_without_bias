void FUN0()
{
    short data;
    data = -1;
    while(1)
    {
        data = CHAR_MAX + 1;
        break;
    }
    {
<START>
        char charData = (char)data;
<END>
        printHexCharLine(charData);
    }
}
