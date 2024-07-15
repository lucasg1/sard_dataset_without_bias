void FUN0()
{
    twoIntsStruct * data;
    if(globalReturnsTrueOrFalse())
    {
        data = NULL;
    }
    else
    {
        data = NULL;
    }
    if(globalReturnsTrueOrFalse())
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
    twoIntsStruct tmpData;
    if(globalReturnsTrueOrFalse())
    {
        {
            tmpData.intOne = 0;
            tmpData.intTwo = 0;
            data = &tmpData;
        }
    }
    else
    {
        {
            tmpData.intOne = 0;
            tmpData.intTwo = 0;
            data = &tmpData;
        }
    }
    if(globalReturnsTrueOrFalse())
    {
        printIntLine(data->intOne);
    }
    else
    {
        printIntLine(data->intOne);
    }
}
