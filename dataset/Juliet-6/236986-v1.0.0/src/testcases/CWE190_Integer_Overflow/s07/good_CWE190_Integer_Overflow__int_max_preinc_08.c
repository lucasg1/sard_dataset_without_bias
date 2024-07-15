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
    int data;
    data = 0;
    if(FUN0())
    {
        data = INT_MAX;
    }
    if(FUN1())
    {
        printLine("Benign, fixed string");
    }
    else
    {
        if (data < INT_MAX)
        {
            ++data;
            int result = data;
            printIntLine(result);
        }
        else
        {
            printLine("data value is too large to perform arithmetic safely.");
        }
    }
}
void FUN3()
{
    int data;
    data = 0;
    if(FUN0())
    {
        data = INT_MAX;
    }
    if(FUN0())
    {
        if (data < INT_MAX)
        {
            ++data;
            int result = data;
            printIntLine(result);
        }
        else
        {
            printLine("data value is too large to perform arithmetic safely.");
        }
    }
}
void FUN4()
{
    int data;
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
            ++data;
            int result = data;
            printIntLine(result);
        }
    }
}
void FUN5()
{
    int data;
    data = 0;
    if(FUN0())
    {
        data = 2;
    }
    if(FUN0())
    {
        {
            ++data;
            int result = data;
            printIntLine(result);
        }
    }
}
