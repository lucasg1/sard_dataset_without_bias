using namespace std;
namespace NAMESPACE0
{
void FUN0(map<int, int64_t> dataMap);
void FUN1()
{
    int64_t data;
    map<int, int64_t> dataMap;
    data = 0LL;
    data = -2;
    dataMap[0] = data;
    dataMap[1] = data;
    dataMap[2] = data;
    FUN0(dataMap);
}
void FUN2(map<int, int64_t> dataMap);
void FUN3()
{
    int64_t data;
    map<int, int64_t> dataMap;
    data = 0LL;
    fscanf (stdin, "%lld", &data);
    dataMap[0] = data;
    dataMap[1] = data;
    dataMap[2] = data;
    FUN2(dataMap);
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
        int64_t result = data * 2;
        printLongLongLine(result);
    }
}
void FUN2(map<int, int64_t> dataMap)
{
    int64_t data = dataMap[2];
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
