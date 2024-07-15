void FUN0(unsigned int data);
void FUN1()
{
    unsigned int data;
    void (*funcPtr) (unsigned int) = FUN0;
    data = 0;
    data = 2;
    funcPtr(data);
}
void FUN2(unsigned int data);
void FUN3()
{
    unsigned int data;
    void (*funcPtr) (unsigned int) = FUN2;
    data = 0;
    data = (unsigned int)RAND32();
    funcPtr(data);
}
void FUN0(unsigned int data)
{
    {
        unsigned int result = data * data;
        printUnsignedLine(result);
    }
}
void FUN2(unsigned int data)
{
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
