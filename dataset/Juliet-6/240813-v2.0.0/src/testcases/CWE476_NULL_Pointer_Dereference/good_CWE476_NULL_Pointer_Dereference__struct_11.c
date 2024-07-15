void FUN0()
{
    twoIntsStruct * data;
    if(globalReturnsTrue())
    {
        data = NULL;
    }
    if(globalReturnsFalse())
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
    if(globalReturnsTrue())
    {
        data = NULL;
    }
    if(globalReturnsTrue())
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
    if(globalReturnsFalse())
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
    if(globalReturnsTrue())
    {
        printIntLine(data->intOne);
    }
}
void FUN3()
{
    twoIntsStruct * data;
    twoIntsStruct tmpData;
    if(globalReturnsTrue())
    {
        {
            tmpData.intOne = 0;
            tmpData.intTwo = 0;
            data = &tmpData;
        }
    }
    if(globalReturnsTrue())
    {
        printIntLine(data->intOne);
    }
}
