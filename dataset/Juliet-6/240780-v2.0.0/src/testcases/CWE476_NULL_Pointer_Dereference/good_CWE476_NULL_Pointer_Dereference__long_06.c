static const int STATIC_CONST_FIVE = 5;
void FUN0()
{
    long * data;
    if(STATIC_CONST_FIVE==5)
    {
        data = NULL;
    }
    if(STATIC_CONST_FIVE!=5)
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
    if(STATIC_CONST_FIVE==5)
    {
        data = NULL;
    }
    if(STATIC_CONST_FIVE==5)
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
    if(STATIC_CONST_FIVE!=5)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        {
            data = &tmpData;
        }
    }
    if(STATIC_CONST_FIVE==5)
    {
        printLongLine(*data);
    }
}
void FUN3()
{
    long * data;
    long tmpData = 5L;
    if(STATIC_CONST_FIVE==5)
    {
        {
            data = &tmpData;
        }
    }
    if(STATIC_CONST_FIVE==5)
    {
        printLongLine(*data);
    }
}
