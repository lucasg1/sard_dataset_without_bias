using namespace std;
namespace NAMESPACE0
{
void FUN0(list<int64_t> dataList);
void FUN1()
{
    int64_t data;
    list<int64_t> dataList;
    data = 0LL;
    data = -2;
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
    data = (int64_t)RAND64();
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
    if(data < 0) 
    {
        int64_t result = data * 2;
        printLongLongLine(result);
    }
}
void FUN2(list<int64_t> dataList)
{
    int64_t data = dataList.back();
    if(data < 0) 
    {
        if (data > (LLONG_MIN/2))
        {
            int64_t result = data * 2;
            printLongLongLine(result);
        }
        else
        {
            printLine("data value is too small to perform multiplication.");
        }
    }
}
} 
