using namespace std;
namespace NAMESPACE0
{
void FUN0(map<int, void *> dataMap);
void FUN1()
{
    void * data;
    map<int, void *> dataMap;
    TwoIntsClass VAR1;
    int VAR2 = 100;
    VAR1.intOne = 0;
    VAR1.intTwo = 0;
    data = &VAR1;
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
    printIntLine((reinterpret_cast<TwoIntsClass *>(data))->intTwo);
}
} 
