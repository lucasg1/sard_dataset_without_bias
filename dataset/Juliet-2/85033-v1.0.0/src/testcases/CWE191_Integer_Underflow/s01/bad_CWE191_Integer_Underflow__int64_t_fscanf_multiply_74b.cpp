using namespace std;
namespace NAMESPACE0
{
void FUN0(map<int, int64_t> dataMap);
void FUN1()
{
    int64_t data;
    map<int, int64_t> dataMap;
    data = 0LL;
    fscanf (stdin, "%lld", &data);
    dataMap[0] = data;
    dataMap[1] = data;
    dataMap[2] = data;
    FUN0(dataMap);
}
} 
using namespace std;
namespace NAMESPACE0
{
void FUN0(map<int, int64_t> dataMap)
{
    int64_t data = dataMap[2];
    if(data < 0) 
    {
<START>
        int64_t result = data * 2;
<END>
        printLongLongLine(result);
    }
}
} 
