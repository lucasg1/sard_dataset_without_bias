using namespace std;
namespace NAMESPACE0
{
void FUN0(vector<FILE *> dataVector);
void FUN1()
{
    FILE * data;
    vector<FILE *> dataVector;
    data = NULL; 
    data = fopen("GoodSource_fopen.txt", "w+");
    dataVector.insert(dataVector.end(), 1, data);
    dataVector.insert(dataVector.end(), 1, data);
    dataVector.insert(dataVector.end(), 1, data);
    FUN0(dataVector);
}
void FUN2(vector<FILE *> dataVector);
void FUN3()
{
    FILE * data;
    vector<FILE *> dataVector;
    data = NULL; 
    data = fopen("BadSource_fopen.txt", "w+");
    fclose(data);
    dataVector.insert(dataVector.end(), 1, data);
    dataVector.insert(dataVector.end(), 1, data);
    dataVector.insert(dataVector.end(), 1, data);
    FUN2(dataVector);
}
} 
using namespace std;
namespace NAMESPACE0
{
void FUN0(vector<FILE *> dataVector)
{
    FILE * data = dataVector[2];
    fclose(data);
}
void FUN2(vector<FILE *> dataVector)
{
    FILE * data = dataVector[2];
    ; 
}
} 
