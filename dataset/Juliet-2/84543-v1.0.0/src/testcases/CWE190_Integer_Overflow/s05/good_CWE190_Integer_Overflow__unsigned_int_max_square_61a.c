unsigned int FUN0(unsigned int data)
{
    data = 2;
    return data;
}
unsigned int FUN1(unsigned int data)
{
    data = UINT_MAX;
    return data;
}
unsigned int FUN0(unsigned int data);
void FUN3()
{
    unsigned int data;
    data = 0;
    data = FUN0(data);
    {
        unsigned int result = data * data;
        printUnsignedLine(result);
    }
}
unsigned int FUN1(unsigned int data);
void FUN5()
{
    unsigned int data;
    data = 0;
    data = FUN1(data);
    if (abs((long)data) <= (long)sqrt((double)UINT_MAX))
    {
        unsigned int result = data * data;
        printUnsignedLine(result);
    }
    else
    {
        printLine("data value is too large to perform arithmetic safely.");
    }
}
