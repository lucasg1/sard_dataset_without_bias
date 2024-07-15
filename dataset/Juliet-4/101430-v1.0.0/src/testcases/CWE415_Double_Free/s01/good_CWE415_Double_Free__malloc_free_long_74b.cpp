using namespace std;
namespace NAMESPACE0
{
void FUN0(map<int, long *> dataMap);
void FUN1()
{
    long * data;
    map<int, long *> dataMap;
    data = NULL;
    data = (long *)malloc(100*sizeof(long));
    dataMap[0] = data;
    dataMap[1] = data;
    dataMap[2] = data;
    FUN0(dataMap);
}
void FUN2(map<int, long *> dataMap);
void FUN3()
{
    long * data;
    map<int, long *> dataMap;
    data = NULL;
    data = (long *)malloc(100*sizeof(long));
    free(data);
    dataMap[0] = data;
    dataMap[1] = data;
    dataMap[2] = data;
    FUN2(dataMap);
}
} 
using namespace std;
namespace NAMESPACE0
{
void FUN0(map<int, long *> dataMap)
{
    long * data = dataMap[2];
    free(data);
}
void FUN2(map<int, long *> dataMap)
{
    long * data = dataMap[2];
    ; 
}
} 
