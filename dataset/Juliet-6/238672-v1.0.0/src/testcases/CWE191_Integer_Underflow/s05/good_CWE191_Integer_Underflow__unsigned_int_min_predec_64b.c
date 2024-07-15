void FUN0(void * dataVoidPtr);
void FUN1()
{
    unsigned int data;
    data = 0;
    data = -2;
    FUN0(&data);
}
void FUN2(void * dataVoidPtr);
void FUN3()
{
    unsigned int data;
    data = 0;
    data = 0;
    FUN2(&data);
}
void FUN0(void * dataVoidPtr)
{
    unsigned int * dataPtr = (unsigned int *)dataVoidPtr;
    unsigned int data = (*dataPtr);
    {
        --data;
        unsigned int result = data;
        printUnsignedLine(result);
    }
}
void FUN2(void * dataVoidPtr)
{
    unsigned int * dataPtr = (unsigned int *)dataVoidPtr;
    unsigned int data = (*dataPtr);
    if (data > 0)
    {
        --data;
        unsigned int result = data;
        printUnsignedLine(result);
    }
    else
    {
        printLine("data value is too large to perform arithmetic safely.");
    }
}
