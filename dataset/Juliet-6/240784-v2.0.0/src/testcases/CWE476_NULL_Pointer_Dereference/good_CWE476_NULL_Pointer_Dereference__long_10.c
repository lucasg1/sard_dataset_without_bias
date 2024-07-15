void FUN0()
{
    long * data;
    if(globalTrue)
    {
        data = NULL;
    }
    if(globalFalse)
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
void FUN1()
{
    long * data;
    if(globalTrue)
    {
        data = NULL;
    }
    if(globalTrue)
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
void FUN2()
{
    long * data;
    long tmpData = 5L;
    if(globalFalse)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        {
            data = &tmpData;
        }
    }
    if(globalTrue)
    {
        printLongLine(*data);
    }
}
void FUN3()
{
    long * data;
    long tmpData = 5L;
    if(globalTrue)
    {
        {
            data = &tmpData;
        }
    }
    if(globalTrue)
    {
        printLongLine(*data);
    }
}
