using namespace std;
namespace NAMESPACE0
{
void FUN0(vector<long *> dataVector);
void FUN1()
{
    long * data;
    vector<long *> dataVector;
    {
        long tmpData = 5L;
        data = &tmpData;
    }
    dataVector.insert(dataVector.end(), 1, data);
    dataVector.insert(dataVector.end(), 1, data);
    dataVector.insert(dataVector.end(), 1, data);
    FUN0(dataVector);
}
void FUN2(vector<long *> dataVector);
void FUN3()
{
    long * data;
    vector<long *> dataVector;
    data = NULL;
    dataVector.insert(dataVector.end(), 1, data);
    dataVector.insert(dataVector.end(), 1, data);
    dataVector.insert(dataVector.end(), 1, data);
    FUN2(dataVector);
}
} 
using namespace std;
namespace NAMESPACE0
{
void FUN0(vector<long *> dataVector)
{
    long * data = dataVector[2];
    printLongLine(*data);
}
void FUN2(vector<long *> dataVector)
{
    long * data = dataVector[2];
    if (data != NULL)
    {
        printLongLine(*data);
    }
    else
    {
        printLine("data is NULL");
    }
}
} 
