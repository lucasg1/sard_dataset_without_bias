static int staticTrue = 1; 
static int staticFalse = 0; 
void FUN0()
{
    int * data;
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
    if(staticTrue)
    {
        data = NULL;
    }
    if(staticTrue)
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
        printIntLine(*data);
    }
}
void FUN3()
{
    int * data;
    int tmpData = 5;
    if(staticTrue)
    {
        {
            data = &tmpData;
        }
    }
    if(staticTrue)
    {
        printIntLine(*data);
    }
}
