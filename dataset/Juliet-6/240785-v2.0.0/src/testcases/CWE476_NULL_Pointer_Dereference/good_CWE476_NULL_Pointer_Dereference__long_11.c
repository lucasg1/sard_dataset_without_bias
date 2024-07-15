void FUN0()
{
    long * data;
    if(globalReturnsTrue())
    {
        data = NULL;
    }
    if(globalReturnsFalse())
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
    if(globalReturnsTrue())
    {
        data = NULL;
    }
    if(globalReturnsTrue())
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
    if(globalReturnsFalse())
    {
        printLine("Benign, fixed string");
    }
    else
    {
        {
            data = &tmpData;
        }
    }
    if(globalReturnsTrue())
    {
        printLongLine(*data);
    }
}
void FUN3()
{
    long * data;
    long tmpData = 5L;
    if(globalReturnsTrue())
    {
        {
            data = &tmpData;
        }
    }
    if(globalReturnsTrue())
    {
        printLongLine(*data);
    }
}
