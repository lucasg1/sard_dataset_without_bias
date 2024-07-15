void FUN0(short * data);
void FUN1()
{
    short data;
    data = -1;
    data = CHAR_MAX-5;
    FUN0(&data);
}
void FUN0(short * dataPtr)
{
    short data = *dataPtr;
    {
        char charData = (char)data;
        printHexCharLine(charData);
    }
}
