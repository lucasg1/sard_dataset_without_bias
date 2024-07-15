void FUN0()
{
    int * data;
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
            printIntLine(*data);
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
            printIntLine(*data);
        }
        else
        {
            printLine("data is NULL");
        }
    }
}
void FUN1()
{
    int * data;
    int tmpData = 5;
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
        printIntLine(*data);
    }
    else
    {
        printIntLine(*data);
    }
}
