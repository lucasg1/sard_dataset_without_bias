namespace NAMESPACE0
{
void FUN0()
{
    TwoIntsClass * data;
    goto source;
source:
    data = NULL;
    goto sink;
sink:
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
void FUN1()
{
    TwoIntsClass * data;
    goto source;
source:
    {
        TwoIntsClass * tmpData = new TwoIntsClass;
        tmpData->intOne = 0;
        tmpData->intTwo = 0;
        data = tmpData;
    }
    goto sink;
sink:
    printIntLine(data->intOne);
    delete data;
}
} 
