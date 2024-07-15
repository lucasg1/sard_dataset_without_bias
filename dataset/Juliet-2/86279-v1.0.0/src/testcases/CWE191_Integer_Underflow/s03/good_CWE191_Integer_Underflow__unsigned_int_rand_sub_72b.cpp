using namespace std;
namespace NAMESPACE0
{
void FUN0(vector<unsigned int> dataVector);
void FUN1()
{
    unsigned int data;
    vector<unsigned int> dataVector;
    data = 0;
    data = -2;
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
    data = (unsigned int)RAND32();
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
    {
        unsigned int result = data - 1;
        printUnsignedLine(result);
    }
}
void FUN2(vector<unsigned int> dataVector)
{
    unsigned int data = dataVector[2];
    if (data > 0)
    {
        unsigned int result = data - 1;
        printUnsignedLine(result);
    }
    else
    {
        printLine("data value is too large to perform subtraction.");
    }
}
} 
