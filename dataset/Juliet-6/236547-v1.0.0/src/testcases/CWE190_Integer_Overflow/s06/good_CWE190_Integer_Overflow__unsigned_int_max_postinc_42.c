static unsigned int FUN0(unsigned int data)
{
    data = 2;
    return data;
}
void FUN1()
{
    unsigned int data;
    data = 0;
    data = FUN0(data);
    {
        data++;
        unsigned int result = data;
        printUnsignedLine(result);
    }
}
static unsigned int FUN2(unsigned int data)
{
    data = UINT_MAX;
    return data;
}
void FUN3()
{
    unsigned int data;
    data = 0;
    data = FUN2(data);
    if (data < UINT_MAX)
    {
        data++;
        unsigned int result = data;
        printUnsignedLine(result);
    }
    else
    {
        printLine("data value is too large to perform arithmetic safely.");
    }
}
