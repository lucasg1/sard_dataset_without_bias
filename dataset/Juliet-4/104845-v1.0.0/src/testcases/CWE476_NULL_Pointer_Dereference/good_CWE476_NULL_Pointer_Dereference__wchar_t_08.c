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
    wchar_t * data;
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
            printWcharLine(data[0]);
        }
        else
        {
            printLine("data is NULL");
        }
    }
}
void FUN3()
{
    wchar_t * data;
    if(FUN0())
    {
        data = NULL;
    }
    if(FUN0())
    {
        if (data != NULL)
        {
            printWcharLine(data[0]);
        }
        else
        {
            printLine("data is NULL");
        }
    }
}
void FUN4()
{
    wchar_t * data;
    if(FUN1())
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = L"Good";
    }
    if(FUN0())
    {
        printWcharLine(data[0]);
    }
}
void FUN5()
{
    wchar_t * data;
    if(FUN0())
    {
        data = L"Good";
    }
    if(FUN0())
    {
        printWcharLine(data[0]);
    }
}
