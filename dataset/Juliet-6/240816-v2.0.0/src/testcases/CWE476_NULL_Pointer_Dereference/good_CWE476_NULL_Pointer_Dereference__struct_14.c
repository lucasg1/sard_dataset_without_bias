void FUN0()
{
    twoIntsStruct * data;
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
            printIntLine(data->intOne);
        }
        else
        {
            printLine("data is NULL");
        }
    }
}
void FUN1()
{
    twoIntsStruct * data;
    if(globalFive==5)
    {
        data = NULL;
    }
    if(globalFive==5)
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
void FUN2()
{
    twoIntsStruct * data;
    twoIntsStruct tmpData;
    if(globalFive!=5)
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
    if(globalFive==5)
    {
        printIntLine(data->intOne);
    }
}
void FUN3()
{
    twoIntsStruct * data;
    twoIntsStruct tmpData;
    if(globalFive==5)
    {
        {
            tmpData.intOne = 0;
            tmpData.intTwo = 0;
            data = &tmpData;
        }
    }
    if(globalFive==5)
    {
        printIntLine(data->intOne);
    }
}
