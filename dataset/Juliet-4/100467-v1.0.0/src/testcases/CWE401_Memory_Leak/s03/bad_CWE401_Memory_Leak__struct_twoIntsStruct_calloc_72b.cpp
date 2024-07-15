using namespace std;
namespace NAMESPACE0
{
void FUN0(vector<struct _twoIntsStruct *> dataVector);
void FUN1()
{
    struct _twoIntsStruct * data;
    vector<struct _twoIntsStruct *> dataVector;
    data = NULL;
    data = (struct _twoIntsStruct *)calloc(100, sizeof(struct _twoIntsStruct));
    data[0].intOne = 0;
    data[0].intTwo = 0;
    printStructLine((twoIntsStruct *)&data[0]);
    dataVector.insert(dataVector.end(), 1, data);
    dataVector.insert(dataVector.end(), 1, data);
    dataVector.insert(dataVector.end(), 1, data);
    FUN0(dataVector);
}
} 
using namespace std;
namespace NAMESPACE0
{
void FUN0(vector<struct _twoIntsStruct *> dataVector)
{
    struct _twoIntsStruct * data = dataVector[2];
<START>
<END>
    ; 
}
} 
