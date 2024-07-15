using namespace std;
namespace NAMESPACE0
{
void FUN0(list<int *> dataList);
void FUN1()
{
    int * data;
    list<int *> dataList;
    data = NULL;
    data = new int;
    dataList.push_back(data);
    dataList.push_back(data);
    dataList.push_back(data);
    FUN0(dataList);
}
void FUN2(list<int *> dataList);
void FUN3()
{
    int * data;
    list<int *> dataList;
    data = NULL;
    data = NULL;
    data = (int *)realloc(data, 100*sizeof(int));
    dataList.push_back(data);
    dataList.push_back(data);
    dataList.push_back(data);
    FUN2(dataList);
}
} 
using namespace std;
namespace NAMESPACE0
{
void FUN0(list<int *> dataList)
{
    int * data = dataList.back();
    delete data;
}
void FUN2(list<int *> dataList)
{
    int * data = dataList.back();
    free(data);
}
} 
