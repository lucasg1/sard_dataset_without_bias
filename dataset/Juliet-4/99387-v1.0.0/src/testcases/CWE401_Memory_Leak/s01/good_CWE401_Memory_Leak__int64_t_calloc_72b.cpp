using namespace std;
namespace NAMESPACE0
{
void FUN0(vector<int64_t *> dataVector);
void FUN1()
{
    int64_t * data;
    vector<int64_t *> dataVector;
    data = NULL;
    data = (int64_t *)ALLOCA(100*sizeof(int64_t));
    data[0] = 5LL;
    printLongLongLine(data[0]);
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
    data = (int64_t *)calloc(100, sizeof(int64_t));
    data[0] = 5LL;
    printLongLongLine(data[0]);
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
    ; 
}
void FUN2(vector<int64_t *> dataVector)
{
    int64_t * data = dataVector[2];
    free(data);
}
} 
