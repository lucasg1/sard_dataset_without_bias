void FUN0()
{
    unsigned int data;
    data = 0;
    if(globalReturnsTrue())
    {
        fscanf (stdin, "%u", &data);
    }
    if(globalReturnsFalse())
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
    if(globalReturnsTrue())
    {
        fscanf (stdin, "%u", &data);
    }
    if(globalReturnsTrue())
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
    if(globalReturnsFalse())
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = 2;
    }
    if(globalReturnsTrue())
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
    if(globalReturnsTrue())
    {
        data = 2;
    }
    if(globalReturnsTrue())
    {
        {
            unsigned int result = data * data;
            printUnsignedLine(result);
        }
    }
}
