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
<START>
    data.intOne = 1;
<END>
    data.intTwo = 1;
    printStructLine(&data);
}
} 
