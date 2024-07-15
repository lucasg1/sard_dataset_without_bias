void FUN0()
{
    unsigned int data;
    data = 0;
    while(1)
    {
        data = (unsigned int)RAND32();
        break;
    }
    while(1)
    {
        if (data < UINT_MAX)
        {
            unsigned int result = data + 1;
            printUnsignedLine(result);
        }
        else
        {
            printLine("data value is too large to perform arithmetic safely.");
        }
        break;
    }
}
void FUN1()
{
    unsigned int data;
    data = 0;
    while(1)
    {
        data = 2;
        break;
    }
    while(1)
    {
        {
            unsigned int result = data + 1;
            printUnsignedLine(result);
        }
        break;
    }
}
