using namespace std;
namespace NAMESPACE0
{
void FUN0(vector<unsigned int> dataVector);
void FUN1()
{
    unsigned int data;
    vector<unsigned int> dataVector;
    data = 0;
    data = 2;
    dataVector.insert(dataVector.end(), 1, data);
    dataVector.insert(dataVector.end(), 1, data);
    dataVector.insert(dataVector.end(), 1, data);
    FUN0(dataVector);
}
void FUN2(vector<unsigned int> dataVector);
void FUN3()
{
    unsigned int data;
    vector<unsigned int> dataVector;
    data = 0;
    data = UINT_MAX;
    dataVector.insert(dataVector.end(), 1, data);
    dataVector.insert(dataVector.end(), 1, data);
    dataVector.insert(dataVector.end(), 1, data);
    FUN2(dataVector);
}
} 
using namespace std;
namespace NAMESPACE0
{
void FUN0(vector<unsigned int> dataVector)
{
    unsigned int data = dataVector[2];
    if(data > 0) 
    {
        unsigned int result = data * 2;
        printUnsignedLine(result);
    }
}
void FUN2(vector<unsigned int> dataVector)
{
    unsigned int data = dataVector[2];
    if(data > 0) 
    {
        if (data < (UINT_MAX/2))
        {
            unsigned int result = data * 2;
            printUnsignedLine(result);
        }
        else
        {
            printLine("data value is too large to perform arithmetic safely.");
        }
    }
}
} 
