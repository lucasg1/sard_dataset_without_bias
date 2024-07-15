static int VAR0 = 0;
static int VAR1 = 0;
static int VAR2 = 0;
void FUN0(int * data)
{
    if(VAR0)
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
    data = NULL;
    VAR0 = 0; 
    FUN0(data);
}
void FUN2(int * data)
{
    if(VAR1)
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
void FUN3()
{
    int * data;
    data = NULL;
    VAR1 = 1; 
    FUN2(data);
}
void FUN4(int * data)
{
    if(VAR2)
    {
        printIntLine(*data);
    }
}
void FUN5()
{
    int * data;
    int tmpData = 5;
    {
        data = &tmpData;
    }
    VAR2 = 1; 
    FUN4(data);
}
