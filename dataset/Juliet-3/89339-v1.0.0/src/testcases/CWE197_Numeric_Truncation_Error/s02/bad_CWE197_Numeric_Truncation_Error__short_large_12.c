void FUN0()
{
    short data;
    data = -1;
    if(globalReturnsTrueOrFalse())
    {
        data = CHAR_MAX + 1;
    }
    else
    {
        data = CHAR_MAX-5;
    }
    {
<START>
        char charData = (char)data;
<END>
        printHexCharLine(charData);
    }
}
