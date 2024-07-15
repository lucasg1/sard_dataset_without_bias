void FUN0(short * dataPtr);
void FUN1()
{
    short data;
    data = -1;
    data = CHAR_MAX + 1;
    FUN0(&data);
}
void FUN0(short * dataPtr)
{
    short data = *dataPtr;
    {
<START>
        char charData = (char)data;
<END>
        printHexCharLine(charData);
    }
}
