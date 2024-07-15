void FUN0(unsigned int * data);
void FUN1()
{
    unsigned int data;
    data = 0;
    data = 2;
    FUN0(&data);
}
void FUN2(unsigned int * data);
void FUN3()
{
    unsigned int data;
    data = 0;
    data = UINT_MAX;
    FUN2(&data);
}
void FUN0(unsigned int * dataPtr)
{
    unsigned int data = *dataPtr;
    {
        ++data;
        unsigned int result = data;
        printUnsignedLine(result);
    }
}
void FUN2(unsigned int * dataPtr)
{
    unsigned int data = *dataPtr;
    if (data < UINT_MAX)
    {
        ++data;
        unsigned int result = data;
        printUnsignedLine(result);
    }
    else
    {
        printLine("data value is too large to perform arithmetic safely.");
    }
}
