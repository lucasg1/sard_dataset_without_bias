using namespace std;
namespace NAMESPACE0
{
void FUN0(list<long *> dataList);
void FUN1()
{
    long * data;
    list<long *> dataList;
    data = NULL;
    data = new long[100];
    dataList.push_back(data);
    dataList.push_back(data);
    dataList.push_back(data);
    FUN0(dataList);
}
void FUN2(list<long *> dataList);
void FUN3()
{
    long * data;
    list<long *> dataList;
    data = NULL;
    data = new long;
    dataList.push_back(data);
    dataList.push_back(data);
    dataList.push_back(data);
    FUN2(dataList);
}
} 
using namespace std;
namespace NAMESPACE0
{
void FUN0(list<long *> dataList)
{
    long * data = dataList.back();
    delete [] data;
}
void FUN2(list<long *> dataList)
{
    long * data = dataList.back();
    delete data;
}
} 
