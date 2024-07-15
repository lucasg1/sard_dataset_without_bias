void FUN0()
{
    unsigned int data;
    data = 0;
    if(1)
    {
        fscanf (stdin, "%u", &data);
    }
    if(0)
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
    if(1)
    {
        fscanf (stdin, "%u", &data);
    }
    if(1)
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
    if(0)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = 2;
    }
    if(1)
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
    if(1)
    {
        data = 2;
    }
    if(1)
    {
        if(data > 0) 
        {
            unsigned int result = data * 2;
            printUnsignedLine(result);
        }
    }
}
