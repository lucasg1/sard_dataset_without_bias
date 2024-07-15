void FUN0()
{
    unsigned int data;
    data = 0;
    if(globalReturnsTrueOrFalse())
    {
        data = (unsigned int)RAND32();
    }
    else
    {
        data = (unsigned int)RAND32();
    }
    if(globalReturnsTrueOrFalse())
    {
        if (data < UINT_MAX)
        {
            ++data;
            unsigned int result = data;
            printUnsignedLine(result);
        }
        else
        {
            printLine("data value is too large to perform arithmetic safely.");
        }
    }
    else
    {
        if (data < UINT_MAX)
        {
            ++data;
            unsigned int result = data;
            printUnsignedLine(result);
        }
        else
        {
            printLine("data value is too large to perform arithmetic safely.");
        }
    }
}
void FUN1()
{
    unsigned int data;
    data = 0;
    if(globalReturnsTrueOrFalse())
    {
        data = 2;
    }
    else
    {
        data = 2;
    }
    if(globalReturnsTrueOrFalse())
    {
        {
            ++data;
            unsigned int result = data;
            printUnsignedLine(result);
        }
    }
    else
    {
        {
            ++data;
            unsigned int result = data;
            printUnsignedLine(result);
        }
    }
}
