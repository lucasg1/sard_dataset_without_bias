using namespace std;
namespace NAMESPACE0
{
void FUN0(vector<int *> dataVector);
void FUN1()
{
    int * data;
    vector<int *> dataVector;
    data = NULL;
    data = new int[100];
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
    data = NULL;
    data = (int *)realloc(data, 100*sizeof(int));
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
    delete [] data;
}
void FUN2(vector<int *> dataVector)
{
    int * data = dataVector[2];
    free(data);
}
} 
