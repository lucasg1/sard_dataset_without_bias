using namespace std;
namespace NAMESPACE0
{
void FUN0(list<long *> dataList);
void FUN1()
{
    long * data;
    list<long *> dataList;
    data = NULL; 
    data = (long *)realloc(data, 1*sizeof(long));
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
<START>
    data[0] = 5L;
<END>
    printLongLine(data[0]);
    free(data);
}
} 
