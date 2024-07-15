void FUN0(void * dataVoidPtr);
void FUN1()
{
    unsigned int data;
    data = 0;
    data = 2;
    FUN0(&data);
}
void FUN2(void * dataVoidPtr);
void FUN3()
{
    unsigned int data;
    data = 0;
    data = UINT_MAX;
    FUN2(&data);
}
void FUN0(void * dataVoidPtr)
{
    unsigned int * dataPtr = (unsigned int *)dataVoidPtr;
    unsigned int data = (*dataPtr);
    {
        unsigned int result = data * data;
        printUnsignedLine(result);
    }
}
void FUN2(void * dataVoidPtr)
{
    unsigned int * dataPtr = (unsigned int *)dataVoidPtr;
    unsigned int data = (*dataPtr);
    if (abs((long)data) < (long)sqrt((double)UINT_MAX))
    {
        unsigned int result = data * data;
        printUnsignedLine(result);
    }
    else
    {
        printLine("data value is too large to perform arithmetic safely.");
    }
}
