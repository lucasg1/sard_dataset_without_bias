void FUN0(void * dataVoidPtr);
void FUN1()
{
    short data;
    data = -1;
    fscanf (stdin, "%hd", &data);
    FUN0(&data);
}
void FUN0(void * dataVoidPtr)
{
    short * dataPtr = (short *)dataVoidPtr;
    short data = (*dataPtr);
    {
<START>
        char charData = (char)data;
<END>
        printHexCharLine(charData);
    }
}
