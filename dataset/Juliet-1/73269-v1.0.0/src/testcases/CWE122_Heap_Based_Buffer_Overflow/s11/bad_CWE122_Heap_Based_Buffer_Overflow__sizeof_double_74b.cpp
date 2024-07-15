using namespace std;
namespace NAMESPACE0
{
void FUN0(map<int, double *> dataMap);
void FUN1()
{
    double * data;
    map<int, double *> dataMap;
    data = NULL;
    data = (double *)malloc(sizeof(data));
    *data = 1.7E300;
    dataMap[0] = data;
    dataMap[1] = data;
    dataMap[2] = data;
    FUN0(dataMap);
}
} 
using namespace std;
namespace NAMESPACE0
{
void FUN0(map<int, double *> dataMap)
{
    double * data = dataMap[2];
<START>
    printDoubleLine(*data);
<END>
    free(data);
}
} 
