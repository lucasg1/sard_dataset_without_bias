using namespace std;
namespace NAMESPACE0
{
void FUN0(list<long> dataList);
void FUN1()
{
    long data;
    list<long> dataList;
    data = 5L;
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
<START>
    data = 10L;
<END>
    printLongLine(data);
}
} 
