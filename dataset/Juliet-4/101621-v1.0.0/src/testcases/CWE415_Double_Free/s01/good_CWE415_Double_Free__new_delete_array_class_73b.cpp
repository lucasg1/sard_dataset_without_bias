using namespace std;
namespace NAMESPACE0
{
void FUN0(list<TwoIntsClass *> dataList);
void FUN1()
{
    TwoIntsClass * data;
    list<TwoIntsClass *> dataList;
    data = NULL;
    data = new TwoIntsClass[100];
    dataList.push_back(data);
    dataList.push_back(data);
    dataList.push_back(data);
    FUN0(dataList);
}
void FUN2(list<TwoIntsClass *> dataList);
void FUN3()
{
    TwoIntsClass * data;
    list<TwoIntsClass *> dataList;
    data = NULL;
    data = new TwoIntsClass[100];
    delete [] data;
    dataList.push_back(data);
    dataList.push_back(data);
    dataList.push_back(data);
    FUN2(dataList);
}
} 
using namespace std;
namespace NAMESPACE0
{
void FUN0(list<TwoIntsClass *> dataList)
{
    TwoIntsClass * data = dataList.back();
    delete [] data;
}
void FUN2(list<TwoIntsClass *> dataList)
{
    TwoIntsClass * data = dataList.back();
    ; 
}
} 
