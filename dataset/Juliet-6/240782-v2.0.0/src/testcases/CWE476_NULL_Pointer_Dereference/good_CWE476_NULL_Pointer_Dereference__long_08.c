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
    long * data;
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
            printLongLine(*data);
        }
        else
        {
            printLine("data is NULL");
        }
    }
}
void FUN3()
{
    long * data;
    if(FUN0())
    {
        data = NULL;
    }
    if(FUN0())
    {
        if (data != NULL)
        {
            printLongLine(*data);
        }
        else
        {
            printLine("data is NULL");
        }
    }
}
void FUN4()
{
    long * data;
    long tmpData = 5L;
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
        printLongLine(*data);
    }
}
void FUN5()
{
    long * data;
    long tmpData = 5L;
    if(FUN0())
    {
        {
            data = &tmpData;
        }
    }
    if(FUN0())
    {
        printLongLine(*data);
    }
}
