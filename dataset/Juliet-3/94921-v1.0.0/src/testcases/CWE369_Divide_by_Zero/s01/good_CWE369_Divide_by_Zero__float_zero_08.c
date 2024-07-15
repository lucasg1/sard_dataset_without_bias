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
    float data;
    data = 0.0F;
    if(FUN0())
    {
        data = 0.0F;
    }
    if(FUN1())
    {
        printLine("Benign, fixed string");
    }
    else
    {
        if(fabs(data) > 0.000001)
        {
            int result = (int)(100.0 / data);
            printIntLine(result);
        }
        else
        {
            printLine("This would result in a divide by zero");
        }
    }
}
void FUN3()
{
    float data;
    data = 0.0F;
    if(FUN0())
    {
        data = 0.0F;
    }
    if(FUN0())
    {
        if(fabs(data) > 0.000001)
        {
            int result = (int)(100.0 / data);
            printIntLine(result);
        }
        else
        {
            printLine("This would result in a divide by zero");
        }
    }
}
void FUN4()
{
    float data;
    data = 0.0F;
    if(FUN1())
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = 2.0F;
    }
    if(FUN0())
    {
        {
            int result = (int)(100.0 / data);
            printIntLine(result);
        }
    }
}
void FUN5()
{
    float data;
    data = 0.0F;
    if(FUN0())
    {
        data = 2.0F;
    }
    if(FUN0())
    {
        {
            int result = (int)(100.0 / data);
            printIntLine(result);
        }
    }
}
