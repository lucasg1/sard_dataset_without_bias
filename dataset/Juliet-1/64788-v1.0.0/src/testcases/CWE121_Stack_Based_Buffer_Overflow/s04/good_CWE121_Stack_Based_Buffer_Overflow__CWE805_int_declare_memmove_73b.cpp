using namespace std;
namespace NAMESPACE0
{
void FUN0(list<int *> dataList);
void FUN1()
{
    int * data;
    list<int *> dataList;
    int VAR1[50];
    int VAR2[100];
    data = VAR2;
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
        memmove(data, source, 100*sizeof(int));
        printIntLine(data[0]);
    }
}
} 
