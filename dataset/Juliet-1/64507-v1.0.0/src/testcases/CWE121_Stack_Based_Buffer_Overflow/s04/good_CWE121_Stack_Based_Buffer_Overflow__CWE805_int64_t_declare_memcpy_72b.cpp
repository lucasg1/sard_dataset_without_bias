using namespace std;
namespace NAMESPACE0
{
void FUN0(vector<int64_t *> dataVector);
void FUN1()
{
    int64_t * data;
    vector<int64_t *> dataVector;
    int64_t VAR1[50];
    int64_t VAR2[100];
    data = VAR2;
    dataVector.insert(dataVector.end(), 1, data);
    dataVector.insert(dataVector.end(), 1, data);
    dataVector.insert(dataVector.end(), 1, data);
    FUN0(dataVector);
}
} 
using namespace std;
namespace NAMESPACE0
{
void FUN0(vector<int64_t *> dataVector)
{
    int64_t * data = dataVector[2];
    {
        int64_t source[100] = {0}; 
        memcpy(data, source, 100*sizeof(int64_t));
        printLongLongLine(data[0]);
    }
}
} 
