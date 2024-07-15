void FUN0(short data);
void FUN1()
{
    short data;
    data = -1;
    data = CHAR_MAX + 1;
    FUN0(data);
}
void FUN2(short data);
void FUN0(short data)
{
    FUN2(data);
}
void FUN2(short data)
{
    {
<START>
        char charData = (char)data;
<END>
        printHexCharLine(charData);
    }
}
