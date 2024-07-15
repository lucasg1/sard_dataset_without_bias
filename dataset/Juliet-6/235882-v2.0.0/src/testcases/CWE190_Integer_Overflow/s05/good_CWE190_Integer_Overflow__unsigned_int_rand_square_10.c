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
    if(globalTrue)
    {
        data = (unsigned int)RAND32();
    }
    if(globalTrue)
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
        {
            unsigned int result = data * data;
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
        {
            unsigned int result = data * data;
            printUnsignedLine(result);
        }
    }
}
