using namespace std;
namespace NAMESPACE0
{
void FUN0(list<twoIntsStruct> dataList);
void FUN1()
{
    twoIntsStruct data;
    list<twoIntsStruct> dataList;
    ; 
    dataList.push_back(data);
    dataList.push_back(data);
    dataList.push_back(data);
    FUN0(dataList);
}
} 
using namespace std;
namespace NAMESPACE0
{
void FUN0(list<twoIntsStruct> dataList)
{
    twoIntsStruct data = dataList.back();
    data.intOne = 0;
    data.intTwo = 0;
    printStructLine(&data);
}
} 
