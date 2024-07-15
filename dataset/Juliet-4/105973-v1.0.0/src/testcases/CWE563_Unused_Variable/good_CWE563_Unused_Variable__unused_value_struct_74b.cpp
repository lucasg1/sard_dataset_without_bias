using namespace std;
namespace NAMESPACE0
{
void FUN0(map<int, twoIntsStruct> dataMap);
void FUN1()
{
    twoIntsStruct data;
    map<int, twoIntsStruct> dataMap;
    data.intOne = 0;
    data.intTwo = 0;
    printStructLine(&data);
    dataMap[0] = data;
    dataMap[1] = data;
    dataMap[2] = data;
    FUN0(dataMap);
}
void FUN2(map<int, twoIntsStruct> dataMap);
void FUN3()
{
    twoIntsStruct data;
    map<int, twoIntsStruct> dataMap;
    data.intOne = 0;
    data.intTwo = 0;
    dataMap[0] = data;
    dataMap[1] = data;
    dataMap[2] = data;
    FUN2(dataMap);
}
} 
using namespace std;
namespace NAMESPACE0
{
void FUN0(map<int, twoIntsStruct> dataMap)
{
    twoIntsStruct data = dataMap[2];
    data.intOne = 1;
    data.intTwo = 1;
    printStructLine(&data);
}
void FUN2(map<int, twoIntsStruct> dataMap)
{
    twoIntsStruct data = dataMap[2];
    printStructLine(&data);
}
} 
