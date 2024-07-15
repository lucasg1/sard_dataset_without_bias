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
    int data;
    data = -1;
    if(FUN0())
    {
        data = RAND32();
    }
    if(FUN1())
    {
        printLine("Benign, fixed string");
    }
    else
    {
        if( data != 0 )
        {
            printIntLine(100 / data);
        }
        else
        {
            printLine("This would result in a divide by zero");
        }
    }
}
void FUN3()
{
    int data;
    data = -1;
    if(FUN0())
    {
        data = RAND32();
    }
    if(FUN0())
    {
        if( data != 0 )
        {
            printIntLine(100 / data);
        }
        else
        {
            printLine("This would result in a divide by zero");
        }
    }
}
void FUN4()
{
    int data;
    data = -1;
    if(FUN1())
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = 7;
    }
    if(FUN0())
    {
        printIntLine(100 / data);
    }
}
void FUN5()
{
    int data;
    data = -1;
    if(FUN0())
    {
        data = 7;
    }
    if(FUN0())
    {
        printIntLine(100 / data);
    }
}
