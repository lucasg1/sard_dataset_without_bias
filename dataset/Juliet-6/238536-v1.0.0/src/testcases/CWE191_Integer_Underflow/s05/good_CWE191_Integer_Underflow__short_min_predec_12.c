void FUN0()
{
    short data;
    data = 0;
    if(globalReturnsTrueOrFalse())
    {
        data = SHRT_MIN;
    }
    else
    {
        data = SHRT_MIN;
    }
    if(globalReturnsTrueOrFalse())
    {
        if (data > SHRT_MIN)
        {
            --data;
            short result = data;
            printIntLine(result);
        }
        else
        {
            printLine("data value is too large to perform arithmetic safely.");
        }
    }
    else
    {
        if (data > SHRT_MIN)
        {
            --data;
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
            short result = data;
            printIntLine(result);
        }
    }
    else
    {
        {
            --data;
            short result = data;
            printIntLine(result);
        }
    }
}
