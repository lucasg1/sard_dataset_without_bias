void FUN0()
{
    unsigned int data;
    data = 0;
    data = -2;
    {
        unsigned int result = data - 1;
        printUnsignedLine(result);
    }
}
void FUN1()
{
    unsigned int data;
    data = 0;
    data = 0;
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
