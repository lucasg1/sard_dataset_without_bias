using namespace std;
namespace NAMESPACE0
{
void FUN0(vector<long> dataVector);
void FUN1()
{
    long data;
    vector<long> dataVector;
    data = 5L;
    printLongLine(data);
    dataVector.insert(dataVector.end(), 1, data);
    dataVector.insert(dataVector.end(), 1, data);
    dataVector.insert(dataVector.end(), 1, data);
    FUN0(dataVector);
}
void FUN2(vector<long> dataVector);
void FUN3()
{
    long data;
    vector<long> dataVector;
    data = 5L;
    dataVector.insert(dataVector.end(), 1, data);
    dataVector.insert(dataVector.end(), 1, data);
    dataVector.insert(dataVector.end(), 1, data);
    FUN2(dataVector);
}
} 
using namespace std;
namespace NAMESPACE0
{
void FUN0(vector<long> dataVector)
{
    long data = dataVector[2];
    data = 10L;
    printLongLine(data);
}
void FUN2(vector<long> dataVector)
{
    long data = dataVector[2];
    printLongLine(data);
}
} 
