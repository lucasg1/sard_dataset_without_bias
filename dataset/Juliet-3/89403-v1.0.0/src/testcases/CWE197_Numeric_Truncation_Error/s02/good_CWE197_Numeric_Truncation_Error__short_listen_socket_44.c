void FUN0(short data)
{
    {
        char charData = (char)data;
        printHexCharLine(charData);
    }
}
void FUN1()
{
    short data;
    void (*funcPtr) (short) = FUN0;
    data = -1;
    data = CHAR_MAX-5;
    funcPtr(data);
}
