namespace NAMESPACE0
{
void FUN0()
{
    TwoIntsClass * data;
    {
        TwoIntsClass * tmpData = new TwoIntsClass;
        tmpData->intOne = 0;
        tmpData->intTwo = 0;
        data = tmpData;
    }
    {
        TwoIntsClass * dataCopy = data;
        TwoIntsClass * data = dataCopy;
        printIntLine(data->intOne);
        delete data;
    }
}
void FUN1()
{
    TwoIntsClass * data;
    data = NULL;
    {
        TwoIntsClass * dataCopy = data;
        TwoIntsClass * data = dataCopy;
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
