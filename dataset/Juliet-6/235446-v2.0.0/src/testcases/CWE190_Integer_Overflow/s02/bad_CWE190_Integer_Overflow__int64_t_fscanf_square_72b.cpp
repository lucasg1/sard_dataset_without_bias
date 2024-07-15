using namespace std;
namespace NAMESPACE0
{
void FUN0(vector<int64_t> dataVector);
void FUN1()
{
    int64_t data;
    vector<int64_t> dataVector;
    data = 0LL;
    fscanf (stdin, "%" SCNd64, &data);
    dataVector.insert(dataVector.end(), 1, data);
    dataVector.insert(dataVector.end(), 1, data);
    dataVector.insert(dataVector.end(), 1, data);
    FUN0(dataVector);
}
} 
using namespace std;
namespace NAMESPACE0
{
void FUN0(vector<int64_t> dataVector)
{
    int64_t data = dataVector[2];
    {
<START>
        int64_t result = data * data;
<END>
        printLongLongLine(result);
    }
}
} 
