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
        if (data > 0)
        {
            unsigned int result = data - 1;
            printUnsignedLine(result);
        }
        else
        {
            printLine("data value is too large to perform subtraction.");
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
        if (data > 0)
        {
            unsigned int result = data - 1;
            printUnsignedLine(result);
        }
        else
        {
            printLine("data value is too large to perform subtraction.");
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
        data = -2;
    }
    if(5==5)
    {
        {
            unsigned int result = data - 1;
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
        data = -2;
    }
    if(5==5)
    {
        {
            unsigned int result = data - 1;
            printUnsignedLine(result);
        }
    }
}
