static short FUN0(short data)
{
    data = (short)RAND32();
    return data;
}
void FUN1()
{
    short data;
    data = -1;
    data = FUN0(data);
    {
<START>
        char charData = (char)data;
<END>
        printHexCharLine(charData);
    }
}
