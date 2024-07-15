void FUN0(void * dataVoidPtr);
void FUN1()
{
    short data;
    data = -1;
    data = CHAR_MAX-5;
    FUN0(&data);
}
void FUN0(void * dataVoidPtr)
{
    short * dataPtr = (short *)dataVoidPtr;
    short data = (*dataPtr);
    {
        char charData = (char)data;
        printHexCharLine(charData);
    }
}
