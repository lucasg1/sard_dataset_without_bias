void FUN0()
{
    short data;
    data = 0;
    if(globalTrue)
    {
        data = (short)RAND32();
    }
    if(globalFalse)
    {
        printLine("Benign, fixed string");
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
    if(globalTrue)
    {
        data = (short)RAND32();
    }
    if(globalTrue)
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
        if(data < 0) 
        {
            short result = data * 2;
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
        if(data < 0) 
        {
            short result = data * 2;
            printIntLine(result);
        }
    }
}
