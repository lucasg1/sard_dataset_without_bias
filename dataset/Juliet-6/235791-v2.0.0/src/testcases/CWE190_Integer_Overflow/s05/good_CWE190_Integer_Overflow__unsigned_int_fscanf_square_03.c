void FUN0()
{
    unsigned int data;
    data = 0;
    if(5==5)
    {
        fscanf (stdin, "%u", &data);
    }
    if(5!=5)
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
    if(5==5)
    {
        fscanf (stdin, "%u", &data);
    }
    if(5==5)
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
            unsigned int result = data * data;
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
            unsigned int result = data * data;
            printUnsignedLine(result);
        }
    }
}
