using namespace std;
namespace NAMESPACE0
{
void FUN0(map<int, int64_t *> dataMap);
void FUN1()
{
    int64_t * data;
    map<int, int64_t *> dataMap;
    data = NULL; 
    data = (int64_t *)calloc(1, sizeof(int64_t));
    dataMap[0] = data;
    dataMap[1] = data;
    dataMap[2] = data;
    FUN0(dataMap);
}
} 
using namespace std;
namespace NAMESPACE0
{
void FUN0(map<int, int64_t *> dataMap)
{
    int64_t * data = dataMap[2];
    if (data != NULL)
    {
        data[0] = 5LL;
        printLongLongLine(data[0]);
        free(data);
    }
}
} 
