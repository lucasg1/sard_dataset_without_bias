using namespace std;
namespace NAMESPACE0
{
void FUN0(vector<TwoIntsClass *> dataVector);
void FUN1()
{
    TwoIntsClass * data;
    vector<TwoIntsClass *> dataVector;
    data = NULL;
    data = new TwoIntsClass;
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
    data = (TwoIntsClass *)malloc(100*sizeof(TwoIntsClass));
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
    delete data;
}
void FUN2(vector<TwoIntsClass *> dataVector)
{
    TwoIntsClass * data = dataVector[2];
    free(data);
}
} 
