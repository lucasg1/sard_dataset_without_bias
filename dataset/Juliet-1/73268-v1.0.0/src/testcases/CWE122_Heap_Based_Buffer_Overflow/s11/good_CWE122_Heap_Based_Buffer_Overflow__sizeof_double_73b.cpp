using namespace std;
namespace NAMESPACE0
{
void FUN0(list<double *> dataList);
void FUN1()
{
    double * data;
    list<double *> dataList;
    data = NULL;
    data = (double *)malloc(sizeof(*data));
    *data = 1.7E300;
    dataList.push_back(data);
    dataList.push_back(data);
    dataList.push_back(data);
    FUN0(dataList);
}
} 
using namespace std;
namespace NAMESPACE0
{
void FUN0(list<double *> dataList)
{
    double * data = dataList.back();
    printDoubleLine(*data);
    free(data);
}
} 
