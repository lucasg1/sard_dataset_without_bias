using namespace std;
namespace NAMESPACE0
{
void FUN0(list<int64_t> dataList);
void FUN1()
{
    int64_t data;
    list<int64_t> dataList;
    data = 0LL;
    data = 2;
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
    data = 0LL;
    data = LLONG_MAX;
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
    {
        int64_t result = data + 1;
        printLongLongLine(result);
    }
}
void FUN2(list<int64_t> dataList)
{
    int64_t data = dataList.back();
    if (data < LLONG_MAX)
    {
        int64_t result = data + 1;
        printLongLongLine(result);
    }
    else
    {
        printLine("data value is too large to perform arithmetic safely.");
    }
}
} 
