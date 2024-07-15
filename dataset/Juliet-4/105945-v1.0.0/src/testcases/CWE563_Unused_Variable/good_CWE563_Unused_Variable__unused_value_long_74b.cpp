using namespace std;
namespace NAMESPACE0
{
void FUN0(map<int, long> dataMap);
void FUN1()
{
    long data;
    map<int, long> dataMap;
    data = 5L;
    printLongLine(data);
    dataMap[0] = data;
    dataMap[1] = data;
    dataMap[2] = data;
    FUN0(dataMap);
}
void FUN2(map<int, long> dataMap);
void FUN3()
{
    long data;
    map<int, long> dataMap;
    data = 5L;
    dataMap[0] = data;
    dataMap[1] = data;
    dataMap[2] = data;
    FUN2(dataMap);
}
} 
using namespace std;
namespace NAMESPACE0
{
void FUN0(map<int, long> dataMap)
{
    long data = dataMap[2];
    data = 10L;
    printLongLine(data);
}
void FUN2(map<int, long> dataMap)
{
    long data = dataMap[2];
    printLongLine(data);
}
} 
