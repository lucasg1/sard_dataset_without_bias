void FUN0()
{
    short data;
    data = 0;
    if(1)
    {
        data = SHRT_MIN;
    }
    if(0)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        if (data > SHRT_MIN)
        {
            short result = data - 1;
            printIntLine(result);
        }
        else
        {
            printLine("data value is too large to perform subtraction.");
        }
    }
}
void FUN1()
{
    short data;
    data = 0;
    if(1)
    {
        data = SHRT_MIN;
    }
    if(1)
    {
        if (data > SHRT_MIN)
        {
            short result = data - 1;
            printIntLine(result);
        }
        else
        {
            printLine("data value is too large to perform subtraction.");
        }
    }
}
void FUN2()
{
    short data;
    data = 0;
    if(0)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = -2;
    }
    if(1)
    {
        {
            short result = data - 1;
            printIntLine(result);
        }
    }
}
void FUN3()
{
    short data;
    data = 0;
    if(1)
    {
        data = -2;
    }
    if(1)
    {
        {
            short result = data - 1;
            printIntLine(result);
        }
    }
}
