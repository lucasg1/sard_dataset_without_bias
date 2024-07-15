static unsigned int FUN0(unsigned int data)
{
    data = -2;
    return data;
}
void FUN1()
{
    unsigned int data;
    data = 0;
    data = FUN0(data);
    {
        unsigned int result = data - 1;
        printUnsignedLine(result);
    }
}
static unsigned int FUN2(unsigned int data)
{
    data = 0;
    return data;
}
void FUN3()
{
    unsigned int data;
    data = 0;
    data = FUN2(data);
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
