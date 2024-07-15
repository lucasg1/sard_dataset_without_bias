void FUN0(short * dataPtr);
void FUN1()
{
    short data;
    data = 0;
    data = (short)RAND32();
    FUN0(&data);
}
void FUN0(short * dataPtr)
{
    short data = *dataPtr;
    {
<START>
        short result = data + 1;
<END>
        printIntLine(result);
    }
}
