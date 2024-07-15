namespace NAMESPACE0
{
void FUN0()
{
    TwoIntsClass * data;
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
    if(globalReturnsTrue())
    {
        data = NULL;
    }
    if(globalReturnsTrue())
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
void FUN2()
{
    TwoIntsClass * data;
    if(globalReturnsFalse())
    {
        printLine("Benign, fixed string");
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
    if(globalReturnsTrue())
    {
        printIntLine(data->intOne);
        delete data;
    }
}
void FUN3()
{
    TwoIntsClass * data;
    if(globalReturnsTrue())
    {
        {
            TwoIntsClass * tmpData = new TwoIntsClass;
            tmpData->intOne = 0;
            tmpData->intTwo = 0;
            data = tmpData;
        }
    }
    if(globalReturnsTrue())
    {
        printIntLine(data->intOne);
        delete data;
    }
}
} 
