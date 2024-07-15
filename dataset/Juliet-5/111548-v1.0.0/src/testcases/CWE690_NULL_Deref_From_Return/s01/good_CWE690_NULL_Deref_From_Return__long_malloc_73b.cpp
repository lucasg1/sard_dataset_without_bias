using namespace std;
namespace NAMESPACE0
{
void FUN0(list<long *> dataList);
void FUN1()
{
    long * data;
    list<long *> dataList;
    data = NULL; 
    data = (long *)malloc(1*sizeof(long));
    dataList.push_back(data);
    dataList.push_back(data);
    dataList.push_back(data);
    FUN0(dataList);
}
} 
using namespace std;
namespace NAMESPACE0
{
void FUN0(list<long *> dataList)
{
    long * data = dataList.back();
    if (data != NULL)
    {
        data[0] = 5L;
        printLongLine(data[0]);
        free(data);
    }
}
} 
