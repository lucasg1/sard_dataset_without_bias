using namespace std;
namespace NAMESPACE0
{
void FUN0(list<long> dataList);
void FUN1()
{
    long data;
    list<long> dataList;
    data = 5L;
    printLongLine(data);
    dataList.push_back(data);
    dataList.push_back(data);
    dataList.push_back(data);
    FUN0(dataList);
}
void FUN2(list<long> dataList);
void FUN3()
{
    long data;
    list<long> dataList;
    data = 5L;
    dataList.push_back(data);
    dataList.push_back(data);
    dataList.push_back(data);
    FUN2(dataList);
}
} 
using namespace std;
namespace NAMESPACE0
{
void FUN0(list<long> dataList)
{
    long data = dataList.back();
    data = 10L;
    printLongLine(data);
}
void FUN2(list<long> dataList)
{
    long data = dataList.back();
    printLongLine(data);
}
} 
