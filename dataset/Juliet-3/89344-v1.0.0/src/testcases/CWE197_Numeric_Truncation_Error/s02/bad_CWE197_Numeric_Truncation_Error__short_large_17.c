void FUN0()
{
    int i;
    short data;
    data = -1;
    for(i = 0; i < 1; i++)
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
