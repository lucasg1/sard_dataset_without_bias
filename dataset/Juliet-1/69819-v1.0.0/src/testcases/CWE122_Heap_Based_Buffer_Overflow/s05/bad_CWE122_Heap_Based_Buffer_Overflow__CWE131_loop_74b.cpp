using namespace std;
namespace NAMESPACE0
{
void FUN0(map<int, int *> dataMap);
void FUN1()
{
    int * data;
    map<int, int *> dataMap;
    data = NULL;
    data = (int *)malloc(10);
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
        int source[10] = {0};
        size_t i;
        for (i = 0; i < 10; i++)
        {
<START>
            data[i] = source[i];
<END>
        }
        printIntLine(data[0]);
        free(data);
    }
}
} 
