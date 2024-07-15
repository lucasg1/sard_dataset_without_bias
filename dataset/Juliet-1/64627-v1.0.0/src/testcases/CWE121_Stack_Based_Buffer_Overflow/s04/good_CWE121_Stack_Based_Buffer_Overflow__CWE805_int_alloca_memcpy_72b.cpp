using namespace std;
namespace NAMESPACE0
{
void FUN0(vector<int *> dataVector);
void FUN1()
{
    int * data;
    vector<int *> dataVector;
    int * VAR1 = (int *)ALLOCA(50*sizeof(int));
    int * VAR2 = (int *)ALLOCA(100*sizeof(int));
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
void FUN0(vector<int *> dataVector)
{
    int * data = dataVector[2];
    {
        int source[100] = {0}; 
        memcpy(data, source, 100*sizeof(int));
        printIntLine(data[0]);
    }
}
} 
