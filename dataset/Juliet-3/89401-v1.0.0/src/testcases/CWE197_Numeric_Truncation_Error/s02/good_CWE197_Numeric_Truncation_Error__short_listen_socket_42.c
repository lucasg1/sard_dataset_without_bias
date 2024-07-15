static short FUN0(short data)
{
    data = CHAR_MAX-5;
    return data;
}
void FUN1()
{
    short data;
    data = -1;
    data = FUN0(data);
    {
        char charData = (char)data;
        printHexCharLine(charData);
    }
}
