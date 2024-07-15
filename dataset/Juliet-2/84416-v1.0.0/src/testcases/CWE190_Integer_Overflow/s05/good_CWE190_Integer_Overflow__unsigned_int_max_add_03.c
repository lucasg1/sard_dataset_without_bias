void FUN0()
{
    unsigned int data;
    data = 0;
    if(5==5)
    {
        data = UINT_MAX;
    }
    if(5!=5)
    {
        printLine("Benign, fixed string");
    }
    else
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
    }
}
void FUN1()
{
    unsigned int data;
    data = 0;
    if(5==5)
    {
        data = UINT_MAX;
    }
    if(5==5)
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
    }
}
void FUN2()
{
    unsigned int data;
    data = 0;
    if(5!=5)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = 2;
    }
    if(5==5)
    {
        {
            unsigned int result = data + 1;
            printUnsignedLine(result);
        }
    }
}
void FUN3()
{
    unsigned int data;
    data = 0;
    if(5==5)
    {
        data = 2;
    }
    if(5==5)
    {
        {
            unsigned int result = data + 1;
            printUnsignedLine(result);
        }
    }
}
