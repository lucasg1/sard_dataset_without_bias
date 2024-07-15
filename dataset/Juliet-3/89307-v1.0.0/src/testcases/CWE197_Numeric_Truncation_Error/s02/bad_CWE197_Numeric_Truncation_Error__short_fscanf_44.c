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
<START>
    fscanf (stdin, "%hd", &data);
<END>
    funcPtr(data);
}
