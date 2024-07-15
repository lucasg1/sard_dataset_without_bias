using namespace std;
namespace NAMESPACE0
{
void FUN0(vector<long *> dataVector);
void FUN1()
{
    long * data;
    vector<long *> dataVector;
    data = NULL; 
    data = (long *)realloc(data, 1*sizeof(long));
    dataVector.insert(dataVector.end(), 1, data);
    dataVector.insert(dataVector.end(), 1, data);
    dataVector.insert(dataVector.end(), 1, data);
    FUN0(dataVector);
}
} 
using namespace std;
namespace NAMESPACE0
{
void FUN0(vector<long *> dataVector)
{
    long * data = dataVector[2];
<START>
    data[0] = 5L;
<END>
    printLongLine(data[0]);
    free(data);
}
} 
