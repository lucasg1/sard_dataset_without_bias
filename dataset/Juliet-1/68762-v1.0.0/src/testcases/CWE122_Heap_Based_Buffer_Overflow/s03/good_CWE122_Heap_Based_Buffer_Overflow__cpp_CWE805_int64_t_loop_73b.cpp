using namespace std;
namespace NAMESPACE0
{
void FUN0(list<int64_t *> dataList);
void FUN1()
{
    int64_t * data;
    list<int64_t *> dataList;
    data = NULL;
    data = new int64_t[100];
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
        {
            size_t i;
            for (i = 0; i < 100; i++)
            {
                data[i] = source[i];
            }
            printLongLongLine(data[0]);
            delete [] data;
        }
    }
}
} 
