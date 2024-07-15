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
    char * data;
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
            printHexCharLine(data[0]);
        }
        else
        {
            printLine("data is NULL");
        }
    }
}
void FUN3()
{
    char * data;
    if(FUN0())
    {
        data = NULL;
    }
    if(FUN0())
    {
        if (data != NULL)
        {
            printHexCharLine(data[0]);
        }
        else
        {
            printLine("data is NULL");
        }
    }
}
void FUN4()
{
    char * data;
    if(FUN1())
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = "Good";
    }
    if(FUN0())
    {
        printHexCharLine(data[0]);
    }
}
void FUN5()
{
    char * data;
    if(FUN0())
    {
        data = "Good";
    }
    if(FUN0())
    {
        printHexCharLine(data[0]);
    }
}
