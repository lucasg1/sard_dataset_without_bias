namespace NAMESPACE0
{
void FUN0()
{
    TwoIntsClass * data;
    if(1)
    {
        data = NULL;
    }
    if(0)
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
    if(1)
    {
        data = NULL;
    }
    if(1)
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
    if(0)
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
    if(1)
    {
        printIntLine(data->intOne);
        delete data;
    }
}
void FUN3()
{
    TwoIntsClass * data;
    if(1)
    {
        {
            TwoIntsClass * tmpData = new TwoIntsClass;
            tmpData->intOne = 0;
            tmpData->intTwo = 0;
            data = tmpData;
        }
    }
    if(1)
    {
        printIntLine(data->intOne);
        delete data;
    }
}
} 
