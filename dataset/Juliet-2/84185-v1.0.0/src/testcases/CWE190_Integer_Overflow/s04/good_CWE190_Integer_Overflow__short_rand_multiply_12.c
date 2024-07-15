void FUN0()
{
    short data;
    data = 0;
    if(globalReturnsTrueOrFalse())
    {
        data = (short)RAND32();
    }
    else
    {
        data = (short)RAND32();
    }
    if(globalReturnsTrueOrFalse())
    {
        if(data > 0) 
        {
            if (data < (SHRT_MAX/2))
            {
                short result = data * 2;
                printIntLine(result);
            }
            else
            {
                printLine("data value is too large to perform arithmetic safely.");
            }
        }
    }
    else
    {
        if(data > 0) 
        {
            if (data < (SHRT_MAX/2))
            {
                short result = data * 2;
                printIntLine(result);
            }
            else
            {
                printLine("data value is too large to perform arithmetic safely.");
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
        data = 2;
    }
    else
    {
        data = 2;
    }
    if(globalReturnsTrueOrFalse())
    {
        if(data > 0) 
        {
            short result = data * 2;
            printIntLine(result);
        }
    }
    else
    {
        if(data > 0) 
        {
            short result = data * 2;
            printIntLine(result);
        }
    }
}
