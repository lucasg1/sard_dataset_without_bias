using namespace std;
namespace NAMESPACE0
{
void FUN0(list<long *> dataList);
void FUN1()
{
    long * data;
    list<long *> dataList;
    {
        long tmpData = 5L;
        data = &tmpData;
    }
    dataList.push_back(data);
    dataList.push_back(data);
    dataList.push_back(data);
    FUN0(dataList);
}
void FUN2(list<long *> dataList);
void FUN3()
{
    long * data;
    list<long *> dataList;
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
void FUN0(list<long *> dataList)
{
    long * data = dataList.back();
    printLongLine(*data);
}
void FUN2(list<long *> dataList)
{
    long * data = dataList.back();
    if (data != NULL)
    {
        printLongLine(*data);
    }
    else
    {
        printLine("data is NULL");
    }
}
} 
