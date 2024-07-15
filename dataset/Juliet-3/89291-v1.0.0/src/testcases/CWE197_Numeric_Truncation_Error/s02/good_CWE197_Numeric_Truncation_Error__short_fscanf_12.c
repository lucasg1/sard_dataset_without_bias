void FUN0()
{
    short data;
    data = -1;
    if(globalReturnsTrueOrFalse())
    {
        data = CHAR_MAX-5;
    }
    else
    {
        data = CHAR_MAX-5;
    }
    {
        char charData = (char)data;
        printHexCharLine(charData);
    }
}
