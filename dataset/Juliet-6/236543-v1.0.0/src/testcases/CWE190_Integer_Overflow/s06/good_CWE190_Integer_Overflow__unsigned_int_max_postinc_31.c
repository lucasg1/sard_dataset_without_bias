void FUN0()
{
    unsigned int data;
    data = 0;
    data = 2;
    {
        unsigned int dataCopy = data;
        unsigned int data = dataCopy;
        {
            data++;
            unsigned int result = data;
            printUnsignedLine(result);
        }
    }
}
void FUN1()
{
    unsigned int data;
    data = 0;
    data = UINT_MAX;
    {
        unsigned int dataCopy = data;
        unsigned int data = dataCopy;
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
}
