void FUN0(short data);
void FUN1()
{
    short data;
    data = -1;
    data = (short)RAND32();
    FUN0(data);
}
void FUN0(short data)
{
    {
<START>
        char charData = (char)data;
<END>
        printHexCharLine(charData);
    }
}
