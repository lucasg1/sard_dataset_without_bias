void FUN0(void * dataVoidPtr);
void FUN1()
{
    short data;
    data = 0;
    data = (short)RAND32();
    FUN0(&data);
}
void FUN0(void * dataVoidPtr)
{
    short * dataPtr = (short *)dataVoidPtr;
    short data = (*dataPtr);
    {
<START>
        data++;
<END>
        short result = data;
        printIntLine(result);
    }
}
