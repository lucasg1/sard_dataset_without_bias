using namespace std;
namespace NAMESPACE0
{
void FUN0(vector<void *> dataVector);
void FUN1()
{
    void * data;
    vector<void *> dataVector;
    data = NULL;
    {
        char charBuffer = 'a';
        data = &charBuffer;
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
void FUN0(vector<void *> dataVector)
{
    void * data = dataVector[2];
<START>
    printIntLine(*((int*)data));
<END>
}
} 
