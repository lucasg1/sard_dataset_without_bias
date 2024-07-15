using namespace std;
namespace NAMESPACE0
{
void FUN0(list<int64_t> dataList);
void FUN1()
{
    int64_t data;
    list<int64_t> dataList;
    data = 0LL;
    data = (int64_t)RAND64();
    dataList.push_back(data);
    dataList.push_back(data);
    dataList.push_back(data);
    FUN0(dataList);
}
} 
using namespace std;
namespace NAMESPACE0
{
void FUN0(list<int64_t> dataList)
{
    int64_t data = dataList.back();
    {
<START>
        int64_t result = data - 1;
<END>
        printLongLongLine(result);
    }
}
} 
