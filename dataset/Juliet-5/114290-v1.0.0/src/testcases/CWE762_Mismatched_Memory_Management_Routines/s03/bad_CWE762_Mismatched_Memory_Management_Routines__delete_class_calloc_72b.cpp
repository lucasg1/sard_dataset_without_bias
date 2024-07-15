using namespace std;
namespace NAMESPACE0
{
void FUN0(vector<TwoIntsClass *> dataVector);
void FUN1()
{
    TwoIntsClass * data;
    vector<TwoIntsClass *> dataVector;
    data = NULL;
    data = (TwoIntsClass *)calloc(100, sizeof(TwoIntsClass));
    dataVector.insert(dataVector.end(), 1, data);
    dataVector.insert(dataVector.end(), 1, data);
    dataVector.insert(dataVector.end(), 1, data);
    FUN0(dataVector);
}
} 
using namespace std;
namespace NAMESPACE0
{
void FUN0(vector<TwoIntsClass *> dataVector)
{
    TwoIntsClass * data = dataVector[2];
<START>
    delete data;
<END>
}
} 
