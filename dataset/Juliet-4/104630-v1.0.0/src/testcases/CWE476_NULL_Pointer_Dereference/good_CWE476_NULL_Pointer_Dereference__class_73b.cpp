using namespace std;
namespace NAMESPACE0
{
void FUN0(list<TwoIntsClass *> dataList);
void FUN1()
{
    TwoIntsClass * data;
    list<TwoIntsClass *> dataList;
    {
        TwoIntsClass * tmpData = new TwoIntsClass;
        tmpData->intOne = 0;
        tmpData->intOne = 0;
        data = tmpData;
    }
    dataList.push_back(data);
    dataList.push_back(data);
    dataList.push_back(data);
    FUN0(dataList);
}
void FUN2(list<TwoIntsClass *> dataList);
void FUN3()
{
    TwoIntsClass * data;
    list<TwoIntsClass *> dataList;
    data = NULL;
    dataList.push_back(data);
    dataList.push_back(data);
    dataList.push_back(data);
    FUN2(dataList);
}
} 
using namespace std;
namespace NAMESPACE0
{
void FUN0(list<TwoIntsClass *> dataList)
{
    TwoIntsClass * data = dataList.back();
    printIntLine(data->intOne);
    delete data;
}
void FUN2(list<TwoIntsClass *> dataList)
{
    TwoIntsClass * data = dataList.back();
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
