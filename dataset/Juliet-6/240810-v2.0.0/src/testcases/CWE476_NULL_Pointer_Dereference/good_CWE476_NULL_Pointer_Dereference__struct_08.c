static int FUN0()
{
    return 1;
}
static int FUN1()
{
    return 0;
}
void FUN2()
{
    twoIntsStruct * data;
    if(FUN0())
    {
        data = NULL;
    }
    if(FUN1())
    {
        printLine("Benign, fixed string");
    }
    else
    {
        if (data != NULL)
        {
            printIntLine(data->intOne);
        }
        else
        {
            printLine("data is NULL");
        }
    }
}
void FUN3()
{
    twoIntsStruct * data;
    if(FUN0())
    {
        data = NULL;
    }
    if(FUN0())
    {
        if (data != NULL)
        {
            printIntLine(data->intOne);
        }
        else
        {
            printLine("data is NULL");
        }
    }
}
void FUN4()
{
    twoIntsStruct * data;
    twoIntsStruct tmpData;
    if(FUN1())
    {
        printLine("Benign, fixed string");
    }
    else
    {
        {
            tmpData.intOne = 0;
            tmpData.intTwo = 0;
            data = &tmpData;
        }
    }
    if(FUN0())
    {
        printIntLine(data->intOne);
    }
}
void FUN5()
{
    twoIntsStruct * data;
    twoIntsStruct tmpData;
    if(FUN0())
    {
        {
            tmpData.intOne = 0;
            tmpData.intTwo = 0;
            data = &tmpData;
        }
    }
    if(FUN0())
    {
        printIntLine(data->intOne);
    }
}
