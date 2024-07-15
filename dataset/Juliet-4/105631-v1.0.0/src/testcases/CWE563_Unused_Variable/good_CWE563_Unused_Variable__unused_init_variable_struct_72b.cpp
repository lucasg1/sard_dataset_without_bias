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
    dataVector.insert(dataVector.end(), 1, data);
    dataVector.insert(dataVector.end(), 1, data);
    dataVector.insert(dataVector.end(), 1, data);
    FUN0(dataVector);
}
} 
using namespace std;
namespace NAMESPACE0
{
void FUN0(vector<twoIntsStruct> dataVector)
{
    twoIntsStruct data = dataVector[2];
    printStructLine(&data);
}
} 
