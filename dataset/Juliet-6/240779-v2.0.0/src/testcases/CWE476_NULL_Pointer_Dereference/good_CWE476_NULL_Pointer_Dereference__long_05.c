static int staticTrue = 1; 
static int staticFalse = 0; 
void FUN0()
{
    long * data;
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
    if(staticTrue)
    {
        data = NULL;
    }
    if(staticTrue)
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
        printLongLine(*data);
    }
}
void FUN3()
{
    long * data;
    long tmpData = 5L;
    if(staticTrue)
    {
        {
            data = &tmpData;
        }
    }
    if(staticTrue)
    {
        printLongLine(*data);
    }
}
