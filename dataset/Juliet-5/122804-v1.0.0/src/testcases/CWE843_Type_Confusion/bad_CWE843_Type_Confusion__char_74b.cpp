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
        char charBuffer = 'a';
        data = &charBuffer;
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
<START>
    printIntLine(*((int*)data));
<END>
}
} 
