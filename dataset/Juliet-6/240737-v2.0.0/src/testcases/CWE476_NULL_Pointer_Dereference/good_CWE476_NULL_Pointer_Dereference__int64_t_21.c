static int VAR0 = 0;
static int VAR1 = 0;
static int VAR2 = 0;
void FUN0(int64_t * data)
{
    if(VAR0)
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
    data = NULL;
    VAR0 = 0; 
    FUN0(data);
}
void FUN2(int64_t * data)
{
    if(VAR1)
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
void FUN3()
{
    int64_t * data;
    data = NULL;
    VAR1 = 1; 
    FUN2(data);
}
void FUN4(int64_t * data)
{
    if(VAR2)
    {
        printLongLongLine(*data);
    }
}
void FUN5()
{
    int64_t * data;
    int64_t tmpData = 5LL;
    {
        data = &tmpData;
    }
    VAR2 = 1; 
    FUN4(data);
}
