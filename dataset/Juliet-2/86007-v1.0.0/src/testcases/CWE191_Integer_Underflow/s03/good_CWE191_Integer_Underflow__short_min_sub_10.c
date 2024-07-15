void FUN0()
{
    short data;
    data = 0;
    if(globalTrue)
    {
        data = SHRT_MIN;
    }
    if(globalFalse)
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
    if(globalTrue)
    {
        data = SHRT_MIN;
    }
    if(globalTrue)
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
    if(globalFalse)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = -2;
    }
    if(globalTrue)
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
    if(globalTrue)
    {
        data = -2;
    }
    if(globalTrue)
    {
        {
            short result = data - 1;
            printIntLine(result);
        }
    }
}