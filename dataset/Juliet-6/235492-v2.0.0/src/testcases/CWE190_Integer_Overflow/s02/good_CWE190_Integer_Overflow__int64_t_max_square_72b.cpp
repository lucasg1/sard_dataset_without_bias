using namespace std;
namespace NAMESPACE0
{
void FUN0(vector<int64_t> dataVector);
void FUN1()
{
    int64_t data;
    vector<int64_t> dataVector;
    data = 0LL;
    data = 2;
    dataVector.insert(dataVector.end(), 1, data);
    dataVector.insert(dataVector.end(), 1, data);
    dataVector.insert(dataVector.end(), 1, data);
    FUN0(dataVector);
}
void FUN2(vector<int64_t> dataVector);
void FUN3()
{
    int64_t data;
    vector<int64_t> dataVector;
    data = 0LL;
    data = LLONG_MAX;
    dataVector.insert(dataVector.end(), 1, data);
    dataVector.insert(dataVector.end(), 1, data);
    dataVector.insert(dataVector.end(), 1, data);
    FUN2(dataVector);
}
} 
using namespace std;
namespace NAMESPACE0
{
void FUN0(vector<int64_t> dataVector)
{
    int64_t data = dataVector[2];
    {
        int64_t result = data * data;
        printLongLongLine(result);
    }
}
void FUN2(vector<int64_t> dataVector)
{
    int64_t data = dataVector[2];
    if (imaxabs((intmax_t)data) <= sqrtl(LLONG_MAX))
    {
        int64_t result = data * data;
        printLongLongLine(result);
    }
    else
    {
        printLine("data value is too large to perform arithmetic safely.");
    }
}
} 
