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
    int * data;
    if(FUN0())
    {
        data = NULL;
    }
    if(FUN1())
    {
        printLine("Benign, fixed string");
    }
    else
    {
        if (data != NULL)
        {
            printIntLine(*data);
        }
        else
        {
            printLine("data is NULL");
        }
    }
}
void FUN3()
{
    int * data;
    if(FUN0())
    {
        data = NULL;
    }
    if(FUN0())
    {
        if (data != NULL)
        {
            printIntLine(*data);
        }
        else
        {
            printLine("data is NULL");
        }
    }
}
void FUN4()
{
    int * data;
    int tmpData = 5;
    if(FUN1())
    {
        printLine("Benign, fixed string");
    }
    else
    {
        {
            data = &tmpData;
        }
    }
    if(FUN0())
    {
        printIntLine(*data);
    }
}
void FUN5()
{
    int * data;
    int tmpData = 5;
    if(FUN0())
    {
        {
            data = &tmpData;
        }
    }
    if(FUN0())
    {
        printIntLine(*data);
    }
}
