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
} 
using namespace std;
namespace NAMESPACE0
{
void FUN0(map<int, int *> dataMap)
{
    int * data = dataMap[2];
    {
        int source[100] = {0}; 
        memmove(data, source, 100*sizeof(int));
        printIntLine(data[0]);
        free(data);
    }
}
} 
