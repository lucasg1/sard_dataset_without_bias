void FUN0()
{
    twoIntsStruct * data;
    if(globalTrue)
    {
        data = NULL;
    }
    if(globalFalse)
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
    if(globalTrue)
    {
        data = NULL;
    }
    if(globalTrue)
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
    if(globalFalse)
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
    if(globalTrue)
    {
        printIntLine(data->intOne);
    }
}
void FUN3()
{
    twoIntsStruct * data;
    twoIntsStruct tmpData;
    if(globalTrue)
    {
        {
            tmpData.intOne = 0;
            tmpData.intTwo = 0;
            data = &tmpData;
        }
    }
    if(globalTrue)
    {
        printIntLine(data->intOne);
    }
}
