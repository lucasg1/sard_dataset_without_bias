using namespace std;
namespace NAMESPACE0
{
void FUN0(vector<int64_t *> dataVector);
void FUN1()
{
    int64_t * data;
    vector<int64_t *> dataVector;
    data = NULL; 
    {
        static int64_t dataBuffer;
        dataBuffer = 5LL;
        data = &dataBuffer;
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
void FUN0(vector<int64_t *> dataVector)
{
    int64_t * data = dataVector[2];
    printLongLongLine(*data);
<START>
    delete data;
<END>
}
} 
