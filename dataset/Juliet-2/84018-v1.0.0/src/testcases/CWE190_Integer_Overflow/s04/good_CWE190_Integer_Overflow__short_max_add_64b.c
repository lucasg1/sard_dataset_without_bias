void FUN0(void * dataVoidPtr);
void FUN1()
{
    short data;
    data = 0;
    data = 2;
    FUN0(&data);
}
void FUN2(void * dataVoidPtr);
void FUN3()
{
    short data;
    data = 0;
    data = SHRT_MAX;
    FUN2(&data);
}
void FUN0(void * dataVoidPtr)
{
    short * dataPtr = (short *)dataVoidPtr;
    short data = (*dataPtr);
    {
        short result = data + 1;
        printIntLine(result);
    }
}
void FUN2(void * dataVoidPtr)
{
    short * dataPtr = (short *)dataVoidPtr;
    short data = (*dataPtr);
    if (data < SHRT_MAX)
    {
        short result = data + 1;
        printIntLine(result);
    }
    else
    {
        printLine("data value is too large to perform arithmetic safely.");
    }
}
