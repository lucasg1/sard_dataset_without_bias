using namespace std;
namespace NAMESPACE0
{
void FUN0(vector<twoIntsStruct *> dataVector);
void FUN1()
{
    twoIntsStruct * data;
    vector<twoIntsStruct *> dataVector;
    data = NULL;
    data = new twoIntsStruct[100];
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
    data = NULL;
    data = (twoIntsStruct *)realloc(data, 100*sizeof(twoIntsStruct));
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
    delete [] data;
}
void FUN2(vector<twoIntsStruct *> dataVector)
{
    twoIntsStruct * data = dataVector[2];
    free(data);
}
} 
