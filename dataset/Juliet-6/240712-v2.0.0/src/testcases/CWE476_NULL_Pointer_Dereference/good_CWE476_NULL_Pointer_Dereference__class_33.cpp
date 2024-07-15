namespace NAMESPACE0
{
void FUN0()
{
    TwoIntsClass * data;
    TwoIntsClass * &dataRef = data;
    {
        TwoIntsClass * tmpData = new TwoIntsClass;
        tmpData->intOne = 0;
        tmpData->intTwo = 0;
        data = tmpData;
    }
    {
        TwoIntsClass * data = dataRef;
        printIntLine(data->intOne);
        delete data;
    }
}
void FUN1()
{
    TwoIntsClass * data;
    TwoIntsClass * &dataRef = data;
    data = NULL;
    {
        TwoIntsClass * data = dataRef;
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
} 
