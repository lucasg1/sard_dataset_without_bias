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
        if(data < 0) 
        {
            if (data > (SHRT_MIN/2))
            {
                short result = data * 2;
                printIntLine(result);
            }
            else
            {
                printLine("data value is too small to perform multiplication.");
            }
        }
    }
    else
    {
        if(data < 0) 
        {
            if (data > (SHRT_MIN/2))
            {
                short result = data * 2;
                printIntLine(result);
            }
            else
            {
                printLine("data value is too small to perform multiplication.");
            }
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
        if(data < 0) 
        {
            short result = data * 2;
            printIntLine(result);
        }
    }
    else
    {
        if(data < 0) 
        {
            short result = data * 2;
            printIntLine(result);
        }
    }
}
