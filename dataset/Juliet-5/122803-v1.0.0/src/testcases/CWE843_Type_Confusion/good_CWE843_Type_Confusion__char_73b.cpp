using namespace std;
namespace NAMESPACE0
{
void FUN0(list<void *> dataList);
void FUN1()
{
    void * data;
    list<void *> dataList;
    data = NULL;
    {
        int intBuffer = 8;
        data = &intBuffer;
    }
    dataList.push_back(data);
    dataList.push_back(data);
    dataList.push_back(data);
    FUN0(dataList);
}
} 
using namespace std;
namespace NAMESPACE0
{
void FUN0(list<void *> dataList)
{
    void * data = dataList.back();
    printIntLine(*((int*)data));
}
} 
