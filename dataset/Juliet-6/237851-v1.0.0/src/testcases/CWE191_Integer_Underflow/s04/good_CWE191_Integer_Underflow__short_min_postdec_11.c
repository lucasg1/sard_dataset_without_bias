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
            data--;
            short result = data;
            printIntLine(result);
        }
        else
        {
            printLine("data value is too large to perform arithmetic safely.");
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
            data--;
            short result = data;
            printIntLine(result);
        }
        else
        {
            printLine("data value is too large to perform arithmetic safely.");
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
            data--;
            short result = data;
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
            data--;
            short result = data;
            printIntLine(result);
        }
    }
}
