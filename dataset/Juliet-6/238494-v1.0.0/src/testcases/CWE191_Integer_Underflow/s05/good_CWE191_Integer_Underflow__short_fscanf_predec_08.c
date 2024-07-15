static int FUN0()
{
    return 1;
}
static int FUN1()
{
    return 0;
}
void FUN2()
{
    short data;
    data = 0;
    if(FUN0())
    {
        fscanf (stdin, "%hd", &data);
    }
    if(FUN1())
    {
        printLine("Benign, fixed string");
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
void FUN3()
{
    short data;
    data = 0;
    if(FUN0())
    {
        fscanf (stdin, "%hd", &data);
    }
    if(FUN0())
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
void FUN4()
{
    short data;
    data = 0;
    if(FUN1())
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = -2;
    }
    if(FUN0())
    {
        {
            --data;
            short result = data;
            printIntLine(result);
        }
    }
}
void FUN5()
{
    short data;
    data = 0;
    if(FUN0())
    {
        data = -2;
    }
    if(FUN0())
    {
        {
            --data;
            short result = data;
            printIntLine(result);
        }
    }
}
