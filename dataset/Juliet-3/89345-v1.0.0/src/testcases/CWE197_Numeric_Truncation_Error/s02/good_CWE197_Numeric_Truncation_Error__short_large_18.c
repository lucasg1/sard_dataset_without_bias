void FUN0()
{
    short data;
    data = -1;
    goto source;
source:
    data = CHAR_MAX-5;
    {
        char charData = (char)data;
        printHexCharLine(charData);
    }
}
