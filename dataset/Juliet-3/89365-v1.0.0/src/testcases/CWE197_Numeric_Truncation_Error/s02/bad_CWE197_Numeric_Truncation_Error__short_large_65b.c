void FUN0(short data);
void FUN1()
{
    short data;
    void (*funcPtr) (short) = FUN0;
    data = -1;
    data = CHAR_MAX + 1;
    funcPtr(data);
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
