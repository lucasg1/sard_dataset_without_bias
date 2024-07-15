using namespace std;
namespace NAMESPACE0
{
void FUN0(list<twoIntsStruct *> dataList);
void FUN1()
{
    twoIntsStruct * data;
    list<twoIntsStruct *> dataList;
    data = NULL;
    data = new twoIntsStruct[100];
    dataList.push_back(data);
    dataList.push_back(data);
    dataList.push_back(data);
    FUN0(dataList);
}
} 
using namespace std;
namespace NAMESPACE0
{
void FUN0(list<twoIntsStruct *> dataList)
{
    twoIntsStruct * data = dataList.back();
<START>
    delete data;
<END>
}
} 
