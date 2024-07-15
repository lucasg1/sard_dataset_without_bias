static int VAR0 = 0;
static int VAR1 = 0;
static int VAR2 = 0;
void FUN0(long * data)
{
    if(VAR0)
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
    data = NULL;
    VAR0 = 0; 
    FUN0(data);
}
void FUN2(long * data)
{
    if(VAR1)
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
void FUN3()
{
    long * data;
    data = NULL;
    VAR1 = 1; 
    FUN2(data);
}
void FUN4(long * data)
{
    if(VAR2)
    {
        printLongLine(*data);
    }
}
void FUN5()
{
    long * data;
    long tmpData = 5L;
    {
        data = &tmpData;
    }
    VAR2 = 1; 
    FUN4(data);
}
