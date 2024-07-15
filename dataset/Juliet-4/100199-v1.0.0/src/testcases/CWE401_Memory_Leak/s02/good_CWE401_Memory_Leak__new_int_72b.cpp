using namespace std;
namespace NAMESPACE0
{
void FUN0(vector<int *> dataVector);
void FUN1()
{
    int * data;
    vector<int *> dataVector;
    data = NULL;
    int VAR1;
    data = &VAR1;
    *data = 5;
    printIntLine(*data);
    dataVector.insert(dataVector.end(), 1, data);
    dataVector.insert(dataVector.end(), 1, data);
    dataVector.insert(dataVector.end(), 1, data);
    FUN0(dataVector);
}
void FUN2(vector<int *> dataVector);
void FUN3()
{
    int * data;
    vector<int *> dataVector;
    data = NULL;
    data = new int;
    *data = 5;
    printIntLine(*data);
    dataVector.insert(dataVector.end(), 1, data);
    dataVector.insert(dataVector.end(), 1, data);
    dataVector.insert(dataVector.end(), 1, data);
    FUN2(dataVector);
}
} 
using namespace std;
namespace NAMESPACE0
{
void FUN0(vector<int *> dataVector)
{
    int * data = dataVector[2];
    ; 
}
void FUN2(vector<int *> dataVector)
{
    int * data = dataVector[2];
    delete data;
}
} 
