void FUN0()
{
    unsigned int data;
    data = 0;
    if(globalReturnsTrueOrFalse())
    {
        data = UINT_MAX;
    }
    else
    {
        data = UINT_MAX;
    }
    if(globalReturnsTrueOrFalse())
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
    else
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
            unsigned int result = data * data;
            printUnsignedLine(result);
        }
    }
    else
    {
        {
            unsigned int result = data * data;
            printUnsignedLine(result);
        }
    }
}
