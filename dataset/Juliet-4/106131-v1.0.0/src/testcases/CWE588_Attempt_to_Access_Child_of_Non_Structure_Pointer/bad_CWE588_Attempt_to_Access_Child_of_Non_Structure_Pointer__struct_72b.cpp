using namespace std;
namespace NAMESPACE0
{
void FUN0(vector<void *> dataVector);
void FUN1()
{
    void * data;
    vector<void *> dataVector;
    twoIntsStruct VAR1;
    int VAR2 = 100;
    VAR1.intOne = 0;
    VAR1.intTwo = 0;
    data = &VAR2;
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
    printStructLine((twoIntsStruct *)data);
<END>
}
} 
