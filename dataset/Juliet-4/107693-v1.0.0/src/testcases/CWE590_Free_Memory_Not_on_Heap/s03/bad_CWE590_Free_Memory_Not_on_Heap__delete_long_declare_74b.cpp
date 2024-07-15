using namespace std;
namespace NAMESPACE0
{
void FUN0(map<int, long *> dataMap);
void FUN1()
{
    long * data;
    map<int, long *> dataMap;
    data = NULL; 
    {
        long dataBuffer;
        dataBuffer = 5L;
        data = &dataBuffer;
    }
    dataMap[0] = data;
    dataMap[1] = data;
    dataMap[2] = data;
    FUN0(dataMap);
}
} 
using namespace std;
namespace NAMESPACE0
{
void FUN0(map<int, long *> dataMap)
{
    long * data = dataMap[2];
    printLongLine(*data);
<START>
    delete data;
<END>
}
} 
