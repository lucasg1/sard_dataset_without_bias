void FUN0(void * dataVoidPtr);
void FUN1()
{
    short data;
    data = 0;
    data = SHRT_MIN;
    FUN0(&data);
}
void FUN0(void * dataVoidPtr)
{
    short * dataPtr = (short *)dataVoidPtr;
    short data = (*dataPtr);
    {
<START>
        short result = data - 1;
<END>
        printIntLine(result);
    }
}
