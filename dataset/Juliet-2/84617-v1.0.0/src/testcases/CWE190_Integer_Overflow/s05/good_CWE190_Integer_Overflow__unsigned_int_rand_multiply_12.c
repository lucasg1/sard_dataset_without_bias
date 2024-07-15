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
        if(data > 0) 
        {
            if (data < (UINT_MAX/2))
            {
                unsigned int result = data * 2;
                printUnsignedLine(result);
            }
            else
            {
                printLine("data value is too large to perform arithmetic safely.");
            }
        }
    }
    else
    {
        if(data > 0) 
        {
            if (data < (UINT_MAX/2))
            {
                unsigned int result = data * 2;
                printUnsignedLine(result);
            }
            else
            {
                printLine("data value is too large to perform arithmetic safely.");
            }
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
        if(data > 0) 
        {
            unsigned int result = data * 2;
            printUnsignedLine(result);
        }
    }
    else
    {
        if(data > 0) 
        {
            unsigned int result = data * 2;
            printUnsignedLine(result);
        }
    }
}
