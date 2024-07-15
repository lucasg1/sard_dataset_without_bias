using namespace std;
namespace NAMESPACE0
{
void FUN0(list<int64_t *> dataList);
void FUN1()
{
    int64_t * data;
    list<int64_t *> dataList;
    {
        int64_t tmpData = 5LL;
        data = &tmpData;
    }
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
    printLongLongLine(*data);
}
void FUN2(list<int64_t *> dataList)
{
    int64_t * data = dataList.back();
    if (data != NULL)
    {
        printLongLongLine(*data);
    }
    else
    {
        printLine("data is NULL");
    }
}
} 
