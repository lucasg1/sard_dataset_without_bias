void FUN0()
{
    short data;
    data = 0;
    if(1)
    {
        data = (short)RAND32();
    }
    if(0)
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
    if(1)
    {
        data = (short)RAND32();
    }
    if(1)
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
    if(1)
    {
        data = -2;
    }
    if(1)
    {
        if(data < 0) 
        {
            short result = data * 2;
            printIntLine(result);
        }
    }
}
