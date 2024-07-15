using namespace std;
namespace NAMESPACE0
{
void FUN0(vector<long *> dataVector);
void FUN1()
{
    long * data;
    vector<long *> dataVector;
    data = NULL;
    data = new long[100];
    dataVector.insert(dataVector.end(), 1, data);
    dataVector.insert(dataVector.end(), 1, data);
    dataVector.insert(dataVector.end(), 1, data);
    FUN0(dataVector);
}
void FUN2(vector<long *> dataVector);
void FUN3()
{
    long * data;
    vector<long *> dataVector;
    data = NULL;
    data = new long;
    dataVector.insert(dataVector.end(), 1, data);
    dataVector.insert(dataVector.end(), 1, data);
    dataVector.insert(dataVector.end(), 1, data);
    FUN2(dataVector);
}
} 
using namespace std;
namespace NAMESPACE0
{
void FUN0(vector<long *> dataVector)
{
    long * data = dataVector[2];
    delete [] data;
}
void FUN2(vector<long *> dataVector)
{
    long * data = dataVector[2];
    delete data;
}
} 
