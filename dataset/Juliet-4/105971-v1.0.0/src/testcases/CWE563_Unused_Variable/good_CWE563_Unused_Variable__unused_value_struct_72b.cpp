using namespace std;
namespace NAMESPACE0
{
void FUN0(vector<twoIntsStruct> dataVector);
void FUN1()
{
    twoIntsStruct data;
    vector<twoIntsStruct> dataVector;
    data.intOne = 0;
    data.intTwo = 0;
    printStructLine(&data);
    dataVector.insert(dataVector.end(), 1, data);
    dataVector.insert(dataVector.end(), 1, data);
    dataVector.insert(dataVector.end(), 1, data);
    FUN0(dataVector);
}
void FUN2(vector<twoIntsStruct> dataVector);
void FUN3()
{
    twoIntsStruct data;
    vector<twoIntsStruct> dataVector;
    data.intOne = 0;
    data.intTwo = 0;
    dataVector.insert(dataVector.end(), 1, data);
    dataVector.insert(dataVector.end(), 1, data);
    dataVector.insert(dataVector.end(), 1, data);
    FUN2(dataVector);
}
} 
using namespace std;
namespace NAMESPACE0
{
void FUN0(vector<twoIntsStruct> dataVector)
{
    twoIntsStruct data = dataVector[2];
    data.intOne = 1;
    data.intTwo = 1;
    printStructLine(&data);
}
void FUN2(vector<twoIntsStruct> dataVector)
{
    twoIntsStruct data = dataVector[2];
    printStructLine(&data);
}
} 
