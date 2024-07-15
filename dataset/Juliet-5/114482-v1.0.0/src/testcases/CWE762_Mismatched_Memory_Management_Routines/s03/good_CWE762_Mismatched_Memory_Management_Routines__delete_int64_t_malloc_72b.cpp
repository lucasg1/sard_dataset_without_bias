using namespace std;
namespace NAMESPACE0
{
void FUN0(vector<int64_t *> dataVector);
void FUN1()
{
    int64_t * data;
    vector<int64_t *> dataVector;
    data = NULL;
    data = new int64_t;
    dataVector.insert(dataVector.end(), 1, data);
    dataVector.insert(dataVector.end(), 1, data);
    dataVector.insert(dataVector.end(), 1, data);
    FUN0(dataVector);
}
void FUN2(vector<int64_t *> dataVector);
void FUN3()
{
    int64_t * data;
    vector<int64_t *> dataVector;
    data = NULL;
    data = (int64_t *)malloc(100*sizeof(int64_t));
    dataVector.insert(dataVector.end(), 1, data);
    dataVector.insert(dataVector.end(), 1, data);
    dataVector.insert(dataVector.end(), 1, data);
    FUN2(dataVector);
}
} 
using namespace std;
namespace NAMESPACE0
{
void FUN0(vector<int64_t *> dataVector)
{
    int64_t * data = dataVector[2];
    delete data;
}
void FUN2(vector<int64_t *> dataVector)
{
    int64_t * data = dataVector[2];
    free(data);
}
} 
