using namespace std;
namespace NAMESPACE0
{
void FUN0(vector<struct _twoIntsStruct *> dataVector);
void FUN1()
{
    struct _twoIntsStruct * data;
    vector<struct _twoIntsStruct *> dataVector;
    data = NULL;
    struct _twoIntsStruct VAR1[100];
    data = VAR1;
    data[0].intOne = 0;
    data[0].intTwo = 0;
    printStructLine((twoIntsStruct *)&data[0]);
    dataVector.insert(dataVector.end(), 1, data);
    dataVector.insert(dataVector.end(), 1, data);
    dataVector.insert(dataVector.end(), 1, data);
    FUN0(dataVector);
}
void FUN2(vector<struct _twoIntsStruct *> dataVector);
void FUN3()
{
    struct _twoIntsStruct * data;
    vector<struct _twoIntsStruct *> dataVector;
    data = NULL;
    data = new struct _twoIntsStruct[100];
    data[0].intOne = 0;
    data[0].intTwo = 0;
    printStructLine((twoIntsStruct *)&data[0]);
    dataVector.insert(dataVector.end(), 1, data);
    dataVector.insert(dataVector.end(), 1, data);
    dataVector.insert(dataVector.end(), 1, data);
    FUN2(dataVector);
}
} 
using namespace std;
namespace NAMESPACE0
{
void FUN0(vector<struct _twoIntsStruct *> dataVector)
{
    struct _twoIntsStruct * data = dataVector[2];
    ; 
}
void FUN2(vector<struct _twoIntsStruct *> dataVector)
{
    struct _twoIntsStruct * data = dataVector[2];
    delete[] data;
}
} 
