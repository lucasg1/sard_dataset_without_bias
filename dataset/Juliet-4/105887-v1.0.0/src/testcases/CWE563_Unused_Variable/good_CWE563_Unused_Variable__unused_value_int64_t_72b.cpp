using namespace std;
namespace NAMESPACE0
{
void FUN0(vector<int64_t> dataVector);
void FUN1()
{
    int64_t data;
    vector<int64_t> dataVector;
    data = 5LL;
    printLongLongLine(data);
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
    data = 5LL;
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
    data = 10LL;
    printLongLongLine(data);
}
void FUN2(vector<int64_t> dataVector)
{
    int64_t data = dataVector[2];
    printLongLongLine(data);
}
} 
