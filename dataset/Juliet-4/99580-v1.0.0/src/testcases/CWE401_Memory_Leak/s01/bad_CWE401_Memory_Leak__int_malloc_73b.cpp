using namespace std;
namespace NAMESPACE0
{
void FUN0(list<int *> dataList);
void FUN1()
{
    int * data;
    list<int *> dataList;
    data = NULL;
    data = (int *)malloc(100*sizeof(int));
    data[0] = 5;
    printIntLine(data[0]);
    dataList.push_back(data);
    dataList.push_back(data);
    dataList.push_back(data);
    FUN0(dataList);
}
} 
using namespace std;
namespace NAMESPACE0
{
void FUN0(list<int *> dataList)
{
    int * data = dataList.back();
<START>
<END>
    ; 
}
} 
