namespace NAMESPACE0
{
void FUN0(TwoIntsClass * data)
{
    printIntLine(data->intOne);
    delete data;
}
void FUN1()
{
    TwoIntsClass * data;
    void (*funcPtr) (TwoIntsClass *) = FUN0;
    {
        TwoIntsClass * tmpData = new TwoIntsClass;
        tmpData->intOne = 0;
        tmpData->intTwo = 0;
        data = tmpData;
    }
    funcPtr(data);
}
void FUN2(TwoIntsClass * data)
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
void FUN3()
{
    TwoIntsClass * data;
    void (*funcPtr) (TwoIntsClass *) = FUN2;
    data = NULL;
    funcPtr(data);
}
} 
