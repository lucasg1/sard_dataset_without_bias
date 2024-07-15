using namespace std;
namespace NAMESPACE0
{
void FUN0(list<twoIntsStruct *> dataList);
void FUN1()
{
    twoIntsStruct * data;
    list<twoIntsStruct *> dataList;
    data = NULL;
    data = new twoIntsStruct;
    dataList.push_back(data);
    dataList.push_back(data);
    dataList.push_back(data);
    FUN0(dataList);
}
void FUN2(list<twoIntsStruct *> dataList);
void FUN3()
{
    twoIntsStruct * data;
    list<twoIntsStruct *> dataList;
    data = NULL;
    data = (twoIntsStruct *)malloc(100*sizeof(twoIntsStruct));
    dataList.push_back(data);
    dataList.push_back(data);
    dataList.push_back(data);
    FUN2(dataList);
}
} 
using namespace std;
namespace NAMESPACE0
{
void FUN0(list<twoIntsStruct *> dataList)
{
    twoIntsStruct * data = dataList.back();
    delete data;
}
void FUN2(list<twoIntsStruct *> dataList)
{
    twoIntsStruct * data = dataList.back();
    free(data);
}
} 
