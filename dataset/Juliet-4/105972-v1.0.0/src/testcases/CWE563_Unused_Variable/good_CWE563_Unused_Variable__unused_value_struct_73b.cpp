using namespace std;
namespace NAMESPACE0
{
void FUN0(list<twoIntsStruct> dataList);
void FUN1()
{
    twoIntsStruct data;
    list<twoIntsStruct> dataList;
    data.intOne = 0;
    data.intTwo = 0;
    printStructLine(&data);
    dataList.push_back(data);
    dataList.push_back(data);
    dataList.push_back(data);
    FUN0(dataList);
}
void FUN2(list<twoIntsStruct> dataList);
void FUN3()
{
    twoIntsStruct data;
    list<twoIntsStruct> dataList;
    data.intOne = 0;
    data.intTwo = 0;
    dataList.push_back(data);
    dataList.push_back(data);
    dataList.push_back(data);
    FUN2(dataList);
}
} 
using namespace std;
namespace NAMESPACE0
{
void FUN0(list<twoIntsStruct> dataList)
{
    twoIntsStruct data = dataList.back();
    data.intOne = 1;
    data.intTwo = 1;
    printStructLine(&data);
}
void FUN2(list<twoIntsStruct> dataList)
{
    twoIntsStruct data = dataList.back();
    printStructLine(&data);
}
} 
