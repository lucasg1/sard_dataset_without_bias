using namespace std;
namespace NAMESPACE0
{
void FUN0(map<int, TwoIntsClass *> dataMap);
void FUN1()
{
    TwoIntsClass * data;
    map<int, TwoIntsClass *> dataMap;
    data = NULL;
    data = new TwoIntsClass[100];
    dataMap[0] = data;
    dataMap[1] = data;
    dataMap[2] = data;
    FUN0(dataMap);
}
void FUN2(map<int, TwoIntsClass *> dataMap);
void FUN3()
{
    TwoIntsClass * data;
    map<int, TwoIntsClass *> dataMap;
    data = NULL;
    data = new TwoIntsClass;
    dataMap[0] = data;
    dataMap[1] = data;
    dataMap[2] = data;
    FUN2(dataMap);
}
} 
using namespace std;
namespace NAMESPACE0
{
void FUN0(map<int, TwoIntsClass *> dataMap)
{
    TwoIntsClass * data = dataMap[2];
    delete [] data;
}
void FUN2(map<int, TwoIntsClass *> dataMap)
{
    TwoIntsClass * data = dataMap[2];
    delete data;
}
} 
