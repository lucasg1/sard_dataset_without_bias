unsigned int FUN0(unsigned int data)
{
    data = 2;
    return data;
}
unsigned int FUN1(unsigned int data)
{
    data = (unsigned int)RAND32();
    return data;
}
unsigned int FUN0(unsigned int data);
void FUN3()
{
    unsigned int data;
    data = 0;
    data = FUN0(data);
    {
        unsigned int result = data + 1;
        printUnsignedLine(result);
    }
}
unsigned int FUN1(unsigned int data);
void FUN5()
{
    unsigned int data;
    data = 0;
    data = FUN1(data);
    if (data < UINT_MAX)
    {
        unsigned int result = data + 1;
        printUnsignedLine(result);
    }
    else
    {
        printLine("data value is too large to perform arithmetic safely.");
    }
}
