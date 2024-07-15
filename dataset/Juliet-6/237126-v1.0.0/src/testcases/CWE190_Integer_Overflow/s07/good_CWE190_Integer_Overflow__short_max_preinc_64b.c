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
        ++data;
        short result = data;
        printIntLine(result);
    }
}
void FUN2(void * dataVoidPtr)
{
    short * dataPtr = (short *)dataVoidPtr;
    short data = (*dataPtr);
    if (data < SHRT_MAX)
    {
        ++data;
        short result = data;
        printIntLine(result);
    }
    else
    {
        printLine("data value is too large to perform arithmetic safely.");
    }
}
