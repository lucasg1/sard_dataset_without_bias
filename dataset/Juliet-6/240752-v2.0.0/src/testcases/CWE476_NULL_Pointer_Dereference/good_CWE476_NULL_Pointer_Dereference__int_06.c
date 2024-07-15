static const int STATIC_CONST_FIVE = 5;
void FUN0()
{
    int * data;
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
    if(STATIC_CONST_FIVE==5)
    {
        data = NULL;
    }
    if(STATIC_CONST_FIVE==5)
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
        printIntLine(*data);
    }
}
void FUN3()
{
    int * data;
    int tmpData = 5;
    if(STATIC_CONST_FIVE==5)
    {
        {
            data = &tmpData;
        }
    }
    if(STATIC_CONST_FIVE==5)
    {
        printIntLine(*data);
    }
}
