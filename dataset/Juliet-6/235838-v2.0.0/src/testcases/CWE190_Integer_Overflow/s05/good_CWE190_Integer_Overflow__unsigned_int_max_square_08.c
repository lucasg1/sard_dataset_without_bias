static int FUN0()
{
    return 1;
}
static int FUN1()
{
    return 0;
}
void FUN2()
{
    unsigned int data;
    data = 0;
    if(FUN0())
    {
        data = UINT_MAX;
    }
    if(FUN1())
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
void FUN3()
{
    unsigned int data;
    data = 0;
    if(FUN0())
    {
        data = UINT_MAX;
    }
    if(FUN0())
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
void FUN4()
{
    unsigned int data;
    data = 0;
    if(FUN1())
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = 2;
    }
    if(FUN0())
    {
        {
            unsigned int result = data * data;
            printUnsignedLine(result);
        }
    }
}
void FUN5()
{
    unsigned int data;
    data = 0;
    if(FUN0())
    {
        data = 2;
    }
    if(FUN0())
    {
        {
            unsigned int result = data * data;
            printUnsignedLine(result);
        }
    }
}
