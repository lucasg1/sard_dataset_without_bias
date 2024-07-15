using namespace std;
namespace NAMESPACE0
{
void FUN0(list<int64_t> dataList);
void FUN1()
{
    int64_t data;
    list<int64_t> dataList;
    data = 5LL;
    printLongLongLine(data);
    dataList.push_back(data);
    dataList.push_back(data);
    dataList.push_back(data);
    FUN0(dataList);
}
void FUN2(list<int64_t> dataList);
void FUN3()
{
    int64_t data;
    list<int64_t> dataList;
    data = 5LL;
    dataList.push_back(data);
    dataList.push_back(data);
    dataList.push_back(data);
    FUN2(dataList);
}
} 
using namespace std;
namespace NAMESPACE0
{
void FUN0(list<int64_t> dataList)
{
    int64_t data = dataList.back();
    data = 10LL;
    printLongLongLine(data);
}
void FUN2(list<int64_t> dataList)
{
    int64_t data = dataList.back();
    printLongLongLine(data);
}
} 
