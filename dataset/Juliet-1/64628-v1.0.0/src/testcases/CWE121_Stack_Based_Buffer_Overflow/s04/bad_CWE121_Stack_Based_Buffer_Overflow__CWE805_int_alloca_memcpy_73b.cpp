using namespace std;
namespace NAMESPACE0
{
void FUN0(list<int *> dataList);
void FUN1()
{
    int * data;
    list<int *> dataList;
    int * VAR1 = (int *)ALLOCA(50*sizeof(int));
    int * VAR2 = (int *)ALLOCA(100*sizeof(int));
    data = VAR1;
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
    {
        int source[100] = {0}; 
<START>
        memcpy(data, source, 100*sizeof(int));
<END>
        printIntLine(data[0]);
    }
}
} 
