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
    dataMap[0] = data;
    dataMap[1] = data;
    dataMap[2] = data;
    FUN0(dataMap);
}
} 
using namespace std;
namespace NAMESPACE0
{
void FUN0(map<int, twoIntsStruct> dataMap)
{
    twoIntsStruct data = dataMap[2];
    printStructLine(&data);
}
} 
