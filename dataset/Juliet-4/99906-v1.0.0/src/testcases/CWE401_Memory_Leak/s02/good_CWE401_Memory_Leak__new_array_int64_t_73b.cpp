using namespace std;
namespace NAMESPACE0
{
void FUN0(list<int64_t *> dataList);
void FUN1()
{
    int64_t * data;
    list<int64_t *> dataList;
    data = NULL;
    int64_t VAR1[100];
    data = VAR1;
    data[0] = 5LL;
    printLongLongLine(data[0]);
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
    data[0] = 5LL;
    printLongLongLine(data[0]);
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
    ; 
}
void FUN2(list<int64_t *> dataList)
{
    int64_t * data = dataList.back();
    delete[] data;
}
} 
