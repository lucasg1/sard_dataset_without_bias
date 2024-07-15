void FUN0()
{
    short data;
    data = 0;
    if(globalFive==5)
    {
        data = (short)RAND32();
    }
    if(globalFive!=5)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        if (data < SHRT_MAX)
        {
            data++;
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
    if(globalFive==5)
    {
        data = (short)RAND32();
    }
    if(globalFive==5)
    {
        if (data < SHRT_MAX)
        {
            data++;
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
    if(globalFive!=5)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = 2;
    }
    if(globalFive==5)
    {
        {
            data++;
            short result = data;
            printIntLine(result);
        }
    }
}
void FUN3()
{
    short data;
    data = 0;
    if(globalFive==5)
    {
        data = 2;
    }
    if(globalFive==5)
    {
        {
            data++;
            short result = data;
            printIntLine(result);
        }
    }
}
