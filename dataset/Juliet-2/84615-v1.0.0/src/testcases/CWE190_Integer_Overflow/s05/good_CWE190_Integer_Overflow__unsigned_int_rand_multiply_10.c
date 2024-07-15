void FUN0()
{
    unsigned int data;
    data = 0;
    if(globalTrue)
    {
        data = (unsigned int)RAND32();
    }
    if(globalFalse)
    {
        printLine("Benign, fixed string");
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
    if(globalTrue)
    {
        data = (unsigned int)RAND32();
    }
    if(globalTrue)
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
void FUN2()
{
    unsigned int data;
    data = 0;
    if(globalFalse)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = 2;
    }
    if(globalTrue)
    {
        if(data > 0) 
        {
            unsigned int result = data * 2;
            printUnsignedLine(result);
        }
    }
}
void FUN3()
{
    unsigned int data;
    data = 0;
    if(globalTrue)
    {
        data = 2;
    }
    if(globalTrue)
    {
        if(data > 0) 
        {
            unsigned int result = data * 2;
            printUnsignedLine(result);
        }
    }
}
