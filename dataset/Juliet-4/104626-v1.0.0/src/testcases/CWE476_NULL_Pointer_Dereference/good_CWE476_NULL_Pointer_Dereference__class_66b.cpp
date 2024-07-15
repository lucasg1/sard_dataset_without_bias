namespace NAMESPACE0
{
void FUN0(TwoIntsClass * dataArray[]);
void FUN1()
{
    TwoIntsClass * data;
    TwoIntsClass * dataArray[5];
    {
        TwoIntsClass * tmpData = new TwoIntsClass;
        tmpData->intOne = 0;
        tmpData->intOne = 0;
        data = tmpData;
    }
    dataArray[2] = data;
    FUN0(dataArray);
}
void FUN2(TwoIntsClass * dataArray[]);
void FUN3()
{
    TwoIntsClass * data;
    TwoIntsClass * dataArray[5];
    data = NULL;
    dataArray[2] = data;
    FUN2(dataArray);
}
} 
namespace NAMESPACE0
{
void FUN0(TwoIntsClass * dataArray[])
{
    TwoIntsClass * data = dataArray[2];
    printIntLine(data->intOne);
    delete data;
}
void FUN2(TwoIntsClass * dataArray[])
{
    TwoIntsClass * data = dataArray[2];
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
