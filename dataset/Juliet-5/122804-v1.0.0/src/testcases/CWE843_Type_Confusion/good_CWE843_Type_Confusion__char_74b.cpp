using namespace std;
namespace NAMESPACE0
{
void FUN0(map<int, void *> dataMap);
void FUN1()
{
    void * data;
    map<int, void *> dataMap;
    data = NULL;
    {
        int intBuffer = 8;
        data = &intBuffer;
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
void FUN0(map<int, void *> dataMap)
{
    void * data = dataMap[2];
    printIntLine(*((int*)data));
}
} 
