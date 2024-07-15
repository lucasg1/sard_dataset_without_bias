void FUN0(short * dataPtr);
void FUN1()
{
    short data;
    data = -1;
    fscanf (stdin, "%hd", &data);
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
