using namespace std;
namespace NAMESPACE0
{
void FUN0(list<int64_t *> dataList);
void FUN1()
{
    int64_t * data;
    list<int64_t *> dataList;
    int64_t * VAR1 = (int64_t *)ALLOCA(50*sizeof(int64_t));
    int64_t * VAR2 = (int64_t *)ALLOCA(100*sizeof(int64_t));
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
void FUN0(list<int64_t *> dataList)
{
    int64_t * data = dataList.back();
    {
        int64_t source[100] = {0}; 
        memmove(data, source, 100*sizeof(int64_t));
        printLongLongLine(data[0]);
    }
}
} 
