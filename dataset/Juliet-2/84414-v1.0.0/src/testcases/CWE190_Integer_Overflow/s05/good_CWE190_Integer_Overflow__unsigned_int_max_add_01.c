void FUN0()
{
    unsigned int data;
    data = 0;
    data = 2;
    {
        unsigned int result = data + 1;
        printUnsignedLine(result);
    }
}
void FUN1()
{
    unsigned int data;
    data = 0;
    data = UINT_MAX;
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
