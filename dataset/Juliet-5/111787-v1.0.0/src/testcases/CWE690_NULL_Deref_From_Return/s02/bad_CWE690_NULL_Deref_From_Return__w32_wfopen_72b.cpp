using namespace std;
namespace NAMESPACE0
{
void FUN0(vector<FILE *> dataVector);
void FUN1()
{
    FILE * data;
    vector<FILE *> dataVector;
    data = NULL;
    data = _wfopen(L"file.txt", L"w+");
    dataVector.insert(dataVector.end(), 1, data);
    dataVector.insert(dataVector.end(), 1, data);
    dataVector.insert(dataVector.end(), 1, data);
    FUN0(dataVector);
}
} 
using namespace std;
namespace NAMESPACE0
{
void FUN0(vector<FILE *> dataVector)
{
    FILE * data = dataVector[2];
<START>
    fclose(data);
<END>
}
} 
