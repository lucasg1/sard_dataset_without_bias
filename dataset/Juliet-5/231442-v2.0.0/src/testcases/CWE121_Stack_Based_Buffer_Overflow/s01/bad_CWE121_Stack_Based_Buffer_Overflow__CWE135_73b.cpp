using namespace std;
namespace NAMESPACE0
{
void FUN0(list<void *> dataList);
void FUN1()
{
    void * data;
    list<void *> dataList;
    data = NULL;
    data = (void *)WIDE_STRING;
    dataList.push_back(data);
    dataList.push_back(data);
    dataList.push_back(data);
    FUN0(dataList);
}
} 
