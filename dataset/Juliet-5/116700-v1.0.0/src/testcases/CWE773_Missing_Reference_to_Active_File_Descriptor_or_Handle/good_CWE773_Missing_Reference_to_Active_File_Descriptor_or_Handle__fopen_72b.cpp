using namespace std;
namespace NAMESPACE0
{
void FUN0(vector<FILE *> dataVector);
void FUN1()
{
    FILE * data;
    vector<FILE *> dataVector;
    data = NULL;
    data = fopen("BadSource_fopen.txt", "w+");
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
    if (data != NULL)
    {
        fclose(data);
    }
    data = fopen("GoodSink_fopen.txt", "w+");
    if (data != NULL)
    {
        fclose(data);
    }
}
} 
