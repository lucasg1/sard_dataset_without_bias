void FUN0()
{
    short data;
    data = 0;
    if(1)
    {
        data = SHRT_MAX;
    }
    if(0)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        if (abs((long)data) <= (long)sqrt((double)SHRT_MAX))
        {
            short result = data * data;
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
    if(1)
    {
        data = SHRT_MAX;
    }
    if(1)
    {
        if (abs((long)data) <= (long)sqrt((double)SHRT_MAX))
        {
            short result = data * data;
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
        {
            short result = data * data;
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
        data = 2;
    }
    if(1)
    {
        {
            short result = data * data;
            printIntLine(result);
        }
    }
}
