short FUN0(short data)
{
    data = CHAR_MAX-5;
    return data;
}
short FUN0(short data);
void FUN2()
{
    short data;
    data = -1;
    data = FUN0(data);
    {
        char charData = (char)data;
        printHexCharLine(charData);
    }
}
