void FUN0(short data)
{
    {
<START>
        char charData = (char)data;
<END>
        printHexCharLine(charData);
    }
}
void FUN1()
{
    short data;
    data = -1;
    data = CHAR_MAX + 1;
    FUN0(data);
}
