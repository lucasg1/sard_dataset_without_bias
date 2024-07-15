using namespace std;
namespace NAMESPACE0
{
void FUN0(vector<twoIntsStruct *> dataVector);
void FUN1()
{
    twoIntsStruct * data;
    vector<twoIntsStruct *> dataVector;
    data = NULL;
    twoIntsStruct VAR1[100];
    data = VAR1;
    data[0].intOne = 0;
    data[0].intTwo = 0;
    printStructLine(&data[0]);
    dataVector.insert(dataVector.end(), 1, data);
    dataVector.insert(dataVector.end(), 1, data);
    dataVector.insert(dataVector.end(), 1, data);
    FUN0(dataVector);
}
void FUN2(vector<twoIntsStruct *> dataVector);
void FUN3()
{
    twoIntsStruct * data;
    vector<twoIntsStruct *> dataVector;
    data = NULL;
    data = new twoIntsStruct[100];
    data[0].intOne = 0;
    data[0].intTwo = 0;
    printStructLine(&data[0]);
    dataVector.insert(dataVector.end(), 1, data);
    dataVector.insert(dataVector.end(), 1, data);
    dataVector.insert(dataVector.end(), 1, data);
    FUN2(dataVector);
}
} 
using namespace std;
namespace NAMESPACE0
{
void FUN0(vector<twoIntsStruct *> dataVector)
{
    twoIntsStruct * data = dataVector[2];
    ; 
}
void FUN2(vector<twoIntsStruct *> dataVector)
{
    twoIntsStruct * data = dataVector[2];
    delete[] data;
}
} 
