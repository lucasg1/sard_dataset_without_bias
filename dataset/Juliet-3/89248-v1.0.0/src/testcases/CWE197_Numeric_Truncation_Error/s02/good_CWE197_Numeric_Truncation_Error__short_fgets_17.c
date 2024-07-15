void FUN0()
{
    int h;
    short data;
    data = -1;
    for(h = 0; h < 1; h++)
    {
        data = CHAR_MAX-5;
    }
    {
        char charData = (char)data;
        printHexCharLine(charData);
    }
}
