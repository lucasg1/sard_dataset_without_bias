void FUN0(int * dataPtr);
void FUN1()
{
    int data;
    data = -1;
    data = SHRT_MAX + 5;
    FUN0(&data);
}
void FUN0(int * dataPtr)
{
    int data = *dataPtr;
    {
<START>
        short shortData = (short)data;
<END>
        printShortLine(shortData);
    }
}
