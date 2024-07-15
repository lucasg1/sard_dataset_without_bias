using namespace std;
namespace NAMESPACE0
{
void FUN0(map<int, int64_t> dataMap);
void FUN1()
{
    int64_t data;
    map<int, int64_t> dataMap;
    data = 0LL;
    data = 2;
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
    data = (int64_t)RAND64();
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
    {
        int64_t result = data + 1;
        printLongLongLine(result);
    }
}
void FUN2(map<int, int64_t> dataMap)
{
    int64_t data = dataMap[2];
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
