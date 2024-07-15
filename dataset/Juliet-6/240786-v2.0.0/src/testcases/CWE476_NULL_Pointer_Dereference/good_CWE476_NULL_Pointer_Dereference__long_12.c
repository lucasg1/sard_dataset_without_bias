void FUN0()
{
    long * data;
    if(globalReturnsTrueOrFalse())
    {
        data = NULL;
    }
    else
    {
        data = NULL;
    }
    if(globalReturnsTrueOrFalse())
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
    long tmpData = 5L;
    if(globalReturnsTrueOrFalse())
    {
        {
            data = &tmpData;
        }
    }
    else
    {
        {
            data = &tmpData;
        }
    }
    if(globalReturnsTrueOrFalse())
    {
        printLongLine(*data);
    }
    else
    {
        printLongLine(*data);
    }
}
