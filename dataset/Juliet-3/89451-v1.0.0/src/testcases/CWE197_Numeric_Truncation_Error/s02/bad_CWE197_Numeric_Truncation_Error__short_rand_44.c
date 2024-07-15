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
    void (*funcPtr) (short) = FUN0;
    data = -1;
    data = (short)RAND32();
    funcPtr(data);
}
