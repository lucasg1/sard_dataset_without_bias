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
        fscanf (stdin, "%u", &data);
    }
    if(FUN1())
    {
        printLine("Benign, fixed string");
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
void FUN3()
{
    unsigned int data;
    data = 0;
    if(FUN0())
    {
        fscanf (stdin, "%u", &data);
    }
    if(FUN0())
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
        data = -2;
    }
    if(FUN0())
    {
        {
            --data;
            unsigned int result = data;
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
        data = -2;
    }
    if(FUN0())
    {
        {
            --data;
            unsigned int result = data;
            printUnsignedLine(result);
        }
    }
}
