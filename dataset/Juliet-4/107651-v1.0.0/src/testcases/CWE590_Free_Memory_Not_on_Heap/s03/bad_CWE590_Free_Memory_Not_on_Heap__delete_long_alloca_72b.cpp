using namespace std;
namespace NAMESPACE0
{
void FUN0(vector<long *> dataVector);
void FUN1()
{
    long * data;
    vector<long *> dataVector;
    data = NULL; 
    {
        long * dataBuffer = (long *)ALLOCA(sizeof(long));
        *dataBuffer = 5L;
        data = dataBuffer;
    }
    dataVector.insert(dataVector.end(), 1, data);
    dataVector.insert(dataVector.end(), 1, data);
    dataVector.insert(dataVector.end(), 1, data);
    FUN0(dataVector);
}
} 
using namespace std;
namespace NAMESPACE0
{
void FUN0(vector<long *> dataVector)
{
    long * data = dataVector[2];
    printLongLine(*data);
<START>
    delete data;
<END>
}
} 
