namespace NAMESPACE0
{
void FUN0()
{
    TwoIntsClass * data;
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
            delete data;
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
            delete data;
        }
        else
        {
            printLine("data is NULL");
        }
    }
}
void FUN1()
{
    TwoIntsClass * data;
    if(globalReturnsTrueOrFalse())
    {
        {
            TwoIntsClass * tmpData = new TwoIntsClass;
            tmpData->intOne = 0;
            tmpData->intTwo = 0;
            data = tmpData;
        }
    }
    else
    {
        {
            TwoIntsClass * tmpData = new TwoIntsClass;
            tmpData->intOne = 0;
            tmpData->intTwo = 0;
            data = tmpData;
        }
    }
    if(globalReturnsTrueOrFalse())
    {
        printIntLine(data->intOne);
        delete data;
    }
    else
    {
        printIntLine(data->intOne);
        delete data;
    }
}
} 
