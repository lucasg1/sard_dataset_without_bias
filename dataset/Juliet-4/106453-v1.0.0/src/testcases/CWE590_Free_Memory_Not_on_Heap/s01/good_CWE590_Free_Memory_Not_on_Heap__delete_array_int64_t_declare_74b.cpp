using namespace std;
namespace NAMESPACE0
{
void FUN0(map<int, int64_t *> dataMap);
void FUN1()
{
    int64_t * data;
    map<int, int64_t *> dataMap;
    data = NULL; 
    {
        int64_t * dataBuffer = new int64_t[100];
        {
            size_t i;
            for (i = 0; i < 100; i++)
            {
                dataBuffer[i] = 5LL;
            }
        }
        data = dataBuffer;
    }
    dataMap[0] = data;
    dataMap[1] = data;
    dataMap[2] = data;
    FUN0(dataMap);
}
} 
using namespace std;
namespace NAMESPACE0
{
void FUN0(map<int, int64_t *> dataMap)
{
    int64_t * data = dataMap[2];
    printLongLongLine(data[0]);
    delete [] data;
}
} 
