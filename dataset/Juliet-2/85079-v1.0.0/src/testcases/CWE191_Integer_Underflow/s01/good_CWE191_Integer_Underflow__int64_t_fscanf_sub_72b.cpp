using namespace std;
namespace NAMESPACE0
{
void FUN0(vector<int64_t> dataVector);
void FUN1()
{
    int64_t data;
    vector<int64_t> dataVector;
    data = 0LL;
    data = -2;
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
    fscanf (stdin, "%lld", &data);
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
        int64_t result = data - 1;
        printLongLongLine(result);
    }
}
void FUN2(vector<int64_t> dataVector)
{
    int64_t data = dataVector[2];
    if (data > LLONG_MIN)
    {
        int64_t result = data - 1;
        printLongLongLine(result);
    }
    else
    {
        printLine("data value is too large to perform subtraction.");
    }
}
} 
