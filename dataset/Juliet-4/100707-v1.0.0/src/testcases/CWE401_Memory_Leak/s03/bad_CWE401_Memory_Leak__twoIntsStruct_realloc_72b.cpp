using namespace std;
namespace NAMESPACE0
{
void FUN0(vector<twoIntsStruct *> dataVector);
void FUN1()
{
    twoIntsStruct * data;
    vector<twoIntsStruct *> dataVector;
    data = NULL;
    data = (twoIntsStruct *)realloc(data, 100*sizeof(twoIntsStruct));
    data[0].intOne = 0;
    data[0].intTwo = 0;
    printStructLine(&data[0]);
    dataVector.insert(dataVector.end(), 1, data);
    dataVector.insert(dataVector.end(), 1, data);
    dataVector.insert(dataVector.end(), 1, data);
    FUN0(dataVector);
}
} 
using namespace std;
namespace NAMESPACE0
{
void FUN0(vector<twoIntsStruct *> dataVector)
{
    twoIntsStruct * data = dataVector[2];
<START>
<END>
    ; 
}
} 
