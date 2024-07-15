void FUN0()
{
    int * data;
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
    if(globalTrue)
    {
        data = NULL;
    }
    if(globalTrue)
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
void FUN2()
{
    int * data;
    int tmpData = 5;
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
        printIntLine(*data);
    }
}
void FUN3()
{
    int * data;
    int tmpData = 5;
    if(globalTrue)
    {
        {
            data = &tmpData;
        }
    }
    if(globalTrue)
    {
        printIntLine(*data);
    }
}
