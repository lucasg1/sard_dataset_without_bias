using namespace std;
namespace NAMESPACE0
{
void FUN0(list<long> dataList);
void FUN1()
{
    long data;
    list<long> dataList;
    ; 
    dataList.push_back(data);
    dataList.push_back(data);
    dataList.push_back(data);
    FUN0(dataList);
}
} 
using namespace std;
namespace NAMESPACE0
{
void FUN0(list<long> dataList)
{
    long data = dataList.back();
    data = 5L;
    printLongLine(data);
}
} 
