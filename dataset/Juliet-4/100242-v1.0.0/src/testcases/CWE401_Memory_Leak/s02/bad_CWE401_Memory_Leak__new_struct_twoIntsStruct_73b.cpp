using namespace std;
namespace NAMESPACE0
{
void FUN0(list<struct _twoIntsStruct *> dataList);
void FUN1()
{
    struct _twoIntsStruct * data;
    list<struct _twoIntsStruct *> dataList;
    data = NULL;
    data = new struct _twoIntsStruct;
    data->intOne = 0;
    data->intTwo = 0;
    printStructLine((twoIntsStruct *)data);
    dataList.push_back(data);
    dataList.push_back(data);
    dataList.push_back(data);
    FUN0(dataList);
}
} 
using namespace std;
namespace NAMESPACE0
{
void FUN0(list<struct _twoIntsStruct *> dataList)
{
    struct _twoIntsStruct * data = dataList.back();
<START>
<END>
    ; 
}
} 
