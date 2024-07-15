void FUN0(int * dataPtr);
void FUN1()
{
    int data;
    data = -1;
    data = RAND32();
    FUN0(&data);
}
void FUN0(int * dataPtr)
{
    int data = *dataPtr;
    {
<START>
        char charData = (char)data;
<END>
        printHexCharLine(charData);
    }
}
