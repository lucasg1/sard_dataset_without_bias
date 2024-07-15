void FUN0()
{
    short data;
    data = -1;
    if(GLOBAL_CONST_TRUE)
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
