void FUN0()
{
    int * data;
    if(GLOBAL_CONST_TRUE)
    {
        data = NULL;
    }
    if(GLOBAL_CONST_FALSE)
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
    if(GLOBAL_CONST_TRUE)
    {
        data = NULL;
    }
    if(GLOBAL_CONST_TRUE)
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
    if(GLOBAL_CONST_FALSE)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        {
            data = &tmpData;
        }
    }
    if(GLOBAL_CONST_TRUE)
    {
        printIntLine(*data);
    }
}
void FUN3()
{
    int * data;
    int tmpData = 5;
    if(GLOBAL_CONST_TRUE)
    {
        {
            data = &tmpData;
        }
    }
    if(GLOBAL_CONST_TRUE)
    {
        printIntLine(*data);
    }
}
