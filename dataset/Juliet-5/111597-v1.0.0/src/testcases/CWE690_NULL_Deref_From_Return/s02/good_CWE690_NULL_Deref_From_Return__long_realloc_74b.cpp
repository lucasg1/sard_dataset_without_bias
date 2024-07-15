using namespace std;
namespace NAMESPACE0
{
void FUN0(map<int, long *> dataMap);
void FUN1()
{
    long * data;
    map<int, long *> dataMap;
    data = NULL; 
    data = (long *)realloc(data, 1*sizeof(long));
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
    if (data != NULL)
    {
        data[0] = 5L;
        printLongLine(data[0]);
        free(data);
    }
}
} 
