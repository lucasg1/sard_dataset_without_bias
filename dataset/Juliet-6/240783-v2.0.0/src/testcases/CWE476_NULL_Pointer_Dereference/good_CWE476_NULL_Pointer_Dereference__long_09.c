void FUN0()
{
    long * data;
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
    if(GLOBAL_CONST_TRUE)
    {
        data = NULL;
    }
    if(GLOBAL_CONST_TRUE)
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
        printLongLine(*data);
    }
}
void FUN3()
{
    long * data;
    long tmpData = 5L;
    if(GLOBAL_CONST_TRUE)
    {
        {
            data = &tmpData;
        }
    }
    if(GLOBAL_CONST_TRUE)
    {
        printLongLine(*data);
    }
}
