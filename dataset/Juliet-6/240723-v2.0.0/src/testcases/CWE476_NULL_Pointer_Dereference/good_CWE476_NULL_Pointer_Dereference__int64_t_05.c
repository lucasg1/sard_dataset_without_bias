static int staticTrue = 1; 
static int staticFalse = 0; 
void FUN0()
{
    int64_t * data;
    if(staticTrue)
    {
        data = NULL;
    }
    if(staticFalse)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        if (data != NULL)
        {
            printLongLongLine(*data);
        }
        else
        {
            printLine("data is NULL");
        }
    }
}
void FUN1()
{
    int64_t * data;
    if(staticTrue)
    {
        data = NULL;
    }
    if(staticTrue)
    {
        if (data != NULL)
        {
            printLongLongLine(*data);
        }
        else
        {
            printLine("data is NULL");
        }
    }
}
void FUN2()
{
    int64_t * data;
    int64_t tmpData = 5LL;
    if(staticFalse)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        {
            data = &tmpData;
        }
    }
    if(staticTrue)
    {
        printLongLongLine(*data);
    }
}
void FUN3()
{
    int64_t * data;
    int64_t tmpData = 5LL;
    if(staticTrue)
    {
        {
            data = &tmpData;
        }
    }
    if(staticTrue)
    {
        printLongLongLine(*data);
    }
}
