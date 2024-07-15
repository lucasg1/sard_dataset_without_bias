void FUN0()
{
    short data;
    data = 0;
    if(globalReturnsTrue())
    {
        data = SHRT_MIN;
    }
    if(globalReturnsFalse())
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
    if(globalReturnsTrue())
    {
        data = SHRT_MIN;
    }
    if(globalReturnsTrue())
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
    if(globalReturnsFalse())
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = -2;
    }
    if(globalReturnsTrue())
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
    if(globalReturnsTrue())
    {
        data = -2;
    }
    if(globalReturnsTrue())
    {
        {
            short result = data - 1;
            printIntLine(result);
        }
    }
}
