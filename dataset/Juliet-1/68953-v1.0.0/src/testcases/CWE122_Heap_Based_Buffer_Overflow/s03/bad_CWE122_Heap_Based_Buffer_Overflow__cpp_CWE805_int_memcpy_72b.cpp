using namespace std;
namespace NAMESPACE0
{
void FUN0(vector<int *> dataVector);
void FUN1()
{
    int * data;
    vector<int *> dataVector;
    data = NULL;
    data = new int[50];
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
<START>
        memcpy(data, source, 100*sizeof(int));
<END>
        printIntLine(data[0]);
        delete [] data;
    }
}
} 
