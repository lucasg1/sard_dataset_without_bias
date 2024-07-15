void FUN0()
{
    unsigned int data;
    data = 0;
    if(globalReturnsTrueOrFalse())
    {
        fscanf (stdin, "%u", &data);
    }
    else
    {
        fscanf (stdin, "%u", &data);
    }
    if(globalReturnsTrueOrFalse())
    {
        if (data > 0)
        {
            --data;
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
        if (data > 0)
        {
            --data;
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
        data = -2;
    }
    else
    {
        data = -2;
    }
    if(globalReturnsTrueOrFalse())
    {
        {
            --data;
            unsigned int result = data;
            printUnsignedLine(result);
        }
    }
    else
    {
        {
            --data;
            unsigned int result = data;
            printUnsignedLine(result);
        }
    }
}
