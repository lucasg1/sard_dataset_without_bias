void FUN0(unsigned int * data);
void FUN1()
{
    unsigned int data;
    data = 0;
    data = -2;
    FUN0(&data);
}
void FUN2(unsigned int * data);
void FUN3()
{
    unsigned int data;
    data = 0;
    data = 0;
    FUN2(&data);
}
void FUN0(unsigned int * dataPtr)
{
    unsigned int data = *dataPtr;
    {
        unsigned int result = data - 1;
        printUnsignedLine(result);
    }
}
void FUN2(unsigned int * dataPtr)
{
    unsigned int data = *dataPtr;
    if (data > 0)
    {
        unsigned int result = data - 1;
        printUnsignedLine(result);
    }
    else
    {
        printLine("data value is too large to perform subtraction.");
    }
}
