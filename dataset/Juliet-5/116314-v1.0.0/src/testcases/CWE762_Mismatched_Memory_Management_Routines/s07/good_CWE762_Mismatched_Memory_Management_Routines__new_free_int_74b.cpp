using namespace std;
namespace NAMESPACE0
{
void FUN0(map<int, int *> dataMap);
void FUN1()
{
    int * data;
    map<int, int *> dataMap;
    data = NULL;
    data = (int *)malloc(100*sizeof(int));
    dataMap[0] = data;
    dataMap[1] = data;
    dataMap[2] = data;
    FUN0(dataMap);
}
void FUN2(map<int, int *> dataMap);
void FUN3()
{
    int * data;
    map<int, int *> dataMap;
    data = NULL;
    data = new int;
    dataMap[0] = data;
    dataMap[1] = data;
    dataMap[2] = data;
    FUN2(dataMap);
}
} 
using namespace std;
namespace NAMESPACE0
{
void FUN0(map<int, int *> dataMap)
{
    int * data = dataMap[2];
    free(data);
}
void FUN2(map<int, int *> dataMap)
{
    int * data = dataMap[2];
    delete data;
}
} 
