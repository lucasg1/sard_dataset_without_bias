using namespace std;
namespace NAMESPACE0
{
void FUN0(vector<int *> dataVector);
void FUN1()
{
    int * data;
    vector<int *> dataVector;
    data = NULL;
    data = (int *)malloc(100*sizeof(int));
    free(data);
    dataVector.insert(dataVector.end(), 1, data);
    dataVector.insert(dataVector.end(), 1, data);
    dataVector.insert(dataVector.end(), 1, data);
    FUN0(dataVector);
}
} 
using namespace std;
namespace NAMESPACE0
{
void FUN0(vector<int *> dataVector)
{
    int * data = dataVector[2];
<START>
    free(data);
<END>
}
} 
