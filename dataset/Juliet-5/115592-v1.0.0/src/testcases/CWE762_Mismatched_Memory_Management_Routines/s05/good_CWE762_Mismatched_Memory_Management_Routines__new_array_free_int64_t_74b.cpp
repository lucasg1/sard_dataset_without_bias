using namespace std;
namespace NAMESPACE0
{
void FUN0(map<int, int64_t *> dataMap);
void FUN1()
{
    int64_t * data;
    map<int, int64_t *> dataMap;
    data = NULL;
    data = (int64_t *)malloc(100*sizeof(int64_t));
    dataMap[0] = data;
    dataMap[1] = data;
    dataMap[2] = data;
    FUN0(dataMap);
}
void FUN2(map<int, int64_t *> dataMap);
void FUN3()
{
    int64_t * data;
    map<int, int64_t *> dataMap;
    data = NULL;
    data = new int64_t[100];
    dataMap[0] = data;
    dataMap[1] = data;
    dataMap[2] = data;
    FUN2(dataMap);
}
} 
using namespace std;
namespace NAMESPACE0
{
void FUN0(map<int, int64_t *> dataMap)
{
    int64_t * data = dataMap[2];
    free(data);
}
void FUN2(map<int, int64_t *> dataMap)
{
    int64_t * data = dataMap[2];
    delete [] data;
}
} 
