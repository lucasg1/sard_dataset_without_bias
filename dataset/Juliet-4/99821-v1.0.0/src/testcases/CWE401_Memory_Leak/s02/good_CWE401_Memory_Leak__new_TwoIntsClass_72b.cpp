using namespace std;
namespace NAMESPACE0
{
void FUN0(vector<TwoIntsClass *> dataVector);
void FUN1()
{
    TwoIntsClass * data;
    vector<TwoIntsClass *> dataVector;
    data = NULL;
    TwoIntsClass VAR1;
    data = &VAR1;
    data->intOne = 0;
    data->intTwo = 0;
    printIntLine(data->intOne);
    printIntLine(data->intTwo);
    dataVector.insert(dataVector.end(), 1, data);
    dataVector.insert(dataVector.end(), 1, data);
    dataVector.insert(dataVector.end(), 1, data);
    FUN0(dataVector);
}
void FUN2(vector<TwoIntsClass *> dataVector);
void FUN3()
{
    TwoIntsClass * data;
    vector<TwoIntsClass *> dataVector;
    data = NULL;
    data = new TwoIntsClass;
    data->intOne = 0;
    data->intTwo = 0;
    printIntLine(data->intOne);
    printIntLine(data->intTwo);
    dataVector.insert(dataVector.end(), 1, data);
    dataVector.insert(dataVector.end(), 1, data);
    dataVector.insert(dataVector.end(), 1, data);
    FUN2(dataVector);
}
} 
using namespace std;
namespace NAMESPACE0
{
void FUN0(vector<TwoIntsClass *> dataVector)
{
    TwoIntsClass * data = dataVector[2];
    ; 
}
void FUN2(vector<TwoIntsClass *> dataVector)
{
    TwoIntsClass * data = dataVector[2];
    delete data;
}
} 
