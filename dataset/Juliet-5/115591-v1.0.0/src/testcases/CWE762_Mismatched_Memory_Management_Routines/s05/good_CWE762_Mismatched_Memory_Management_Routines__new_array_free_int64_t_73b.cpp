using namespace std;
namespace NAMESPACE0
{
void FUN0(list<int64_t *> dataList);
void FUN1()
{
    int64_t * data;
    list<int64_t *> dataList;
    data = NULL;
    data = (int64_t *)malloc(100*sizeof(int64_t));
    dataList.push_back(data);
    dataList.push_back(data);
    dataList.push_back(data);
    FUN0(dataList);
}
void FUN2(list<int64_t *> dataList);
void FUN3()
{
    int64_t * data;
    list<int64_t *> dataList;
    data = NULL;
    data = new int64_t[100];
    dataList.push_back(data);
    dataList.push_back(data);
    dataList.push_back(data);
    FUN2(dataList);
}
} 
using namespace std;
namespace NAMESPACE0
{
void FUN0(list<int64_t *> dataList)
{
    int64_t * data = dataList.back();
    free(data);
}
void FUN2(list<int64_t *> dataList)
{
    int64_t * data = dataList.back();
    delete [] data;
}
} 
