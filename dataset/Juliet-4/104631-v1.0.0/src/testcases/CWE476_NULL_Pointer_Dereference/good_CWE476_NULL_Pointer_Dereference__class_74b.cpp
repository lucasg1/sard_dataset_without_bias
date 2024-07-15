using namespace std;
namespace NAMESPACE0
{
void FUN0(map<int, TwoIntsClass *> dataMap);
void FUN1()
{
    TwoIntsClass * data;
    map<int, TwoIntsClass *> dataMap;
    {
        TwoIntsClass * tmpData = new TwoIntsClass;
        tmpData->intOne = 0;
        tmpData->intOne = 0;
        data = tmpData;
    }
    dataMap[0] = data;
    dataMap[1] = data;
    dataMap[2] = data;
    FUN0(dataMap);
}
void FUN2(map<int, TwoIntsClass *> dataMap);
void FUN3()
{
    TwoIntsClass * data;
    map<int, TwoIntsClass *> dataMap;
    data = NULL;
    dataMap[0] = data;
    dataMap[1] = data;
    dataMap[2] = data;
    FUN2(dataMap);
}
} 
using namespace std;
namespace NAMESPACE0
{
void FUN0(map<int, TwoIntsClass *> dataMap)
{
    TwoIntsClass * data = dataMap[2];
    printIntLine(data->intOne);
    delete data;
}
void FUN2(map<int, TwoIntsClass *> dataMap)
{
    TwoIntsClass * data = dataMap[2];
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
