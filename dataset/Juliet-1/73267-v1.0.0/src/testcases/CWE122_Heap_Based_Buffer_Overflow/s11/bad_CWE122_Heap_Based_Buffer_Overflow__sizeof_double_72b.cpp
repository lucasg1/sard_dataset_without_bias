using namespace std;
namespace NAMESPACE0
{
void FUN0(vector<double *> dataVector);
void FUN1()
{
    double * data;
    vector<double *> dataVector;
    data = NULL;
    data = (double *)malloc(sizeof(data));
    *data = 1.7E300;
    dataVector.insert(dataVector.end(), 1, data);
    dataVector.insert(dataVector.end(), 1, data);
    dataVector.insert(dataVector.end(), 1, data);
    FUN0(dataVector);
}
} 
using namespace std;
namespace NAMESPACE0
{
void FUN0(vector<double *> dataVector)
{
    double * data = dataVector[2];
<START>
    printDoubleLine(*data);
<END>
    free(data);
}
} 
