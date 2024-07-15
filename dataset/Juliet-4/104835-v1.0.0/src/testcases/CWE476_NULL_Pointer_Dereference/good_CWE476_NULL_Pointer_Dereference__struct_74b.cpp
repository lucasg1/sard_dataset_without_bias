using namespace std;
namespace NAMESPACE0
{
void FUN0(map<int, twoIntsStruct *> dataMap);
void FUN1()
{
    twoIntsStruct * data;
    map<int, twoIntsStruct *> dataMap;
    {
        twoIntsStruct tmpData;
        tmpData.intOne = 0;
        tmpData.intTwo = 0;
        data = &tmpData;
    }
    dataMap[0] = data;
    dataMap[1] = data;
    dataMap[2] = data;
    FUN0(dataMap);
}
void FUN2(map<int, twoIntsStruct *> dataMap);
void FUN3()
{
    twoIntsStruct * data;
    map<int, twoIntsStruct *> dataMap;
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
void FUN0(map<int, twoIntsStruct *> dataMap)
{
    twoIntsStruct * data = dataMap[2];
    printIntLine(data->intOne);
}
void FUN2(map<int, twoIntsStruct *> dataMap)
{
    twoIntsStruct * data = dataMap[2];
    if (data != NULL)
    {
        printIntLine(data->intOne);
    }
    else
    {
        printLine("data is NULL");
    }
}
} 
