void FUN0()
{
    int * data;
    if(globalFive==5)
    {
        data = NULL;
    }
    if(globalFive!=5)
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
    if(globalFive==5)
    {
        data = NULL;
    }
    if(globalFive==5)
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
    if(globalFive!=5)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        {
            data = &tmpData;
        }
    }
    if(globalFive==5)
    {
        printIntLine(*data);
    }
}
void FUN3()
{
    int * data;
    int tmpData = 5;
    if(globalFive==5)
    {
        {
            data = &tmpData;
        }
    }
    if(globalFive==5)
    {
        printIntLine(*data);
    }
}
