void FUN0()
{
    unsigned int data;
    data = 0;
    if(globalTrue)
    {
        fscanf (stdin, "%u", &data);
    }
    if(globalFalse)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        if (data < UINT_MAX)
        {
            data++;
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
    if(globalTrue)
    {
        fscanf (stdin, "%u", &data);
    }
    if(globalTrue)
    {
        if (data < UINT_MAX)
        {
            data++;
            unsigned int result = data;
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
            data++;
            unsigned int result = data;
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
            data++;
            unsigned int result = data;
            printUnsignedLine(result);
        }
    }
}
