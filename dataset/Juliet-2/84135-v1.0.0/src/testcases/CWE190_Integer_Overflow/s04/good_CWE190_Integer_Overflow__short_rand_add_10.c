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
        if (data < SHRT_MAX)
        {
            short result = data + 1;
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
    if(globalTrue)
    {
        data = (short)RAND32();
    }
    if(globalTrue)
    {
        if (data < SHRT_MAX)
        {
            short result = data + 1;
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
    if(globalFalse)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = 2;
    }
    if(globalTrue)
    {
        {
            short result = data + 1;
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
        data = 2;
    }
    if(globalTrue)
    {
        {
            short result = data + 1;
            printIntLine(result);
        }
    }
}
