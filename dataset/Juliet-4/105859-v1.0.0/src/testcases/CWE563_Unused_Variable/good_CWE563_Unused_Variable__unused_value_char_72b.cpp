using namespace std;
namespace NAMESPACE0
{
void FUN0(vector<char> dataVector);
void FUN1()
{
    char data;
    vector<char> dataVector;
    data = 'C';
    printHexCharLine(data);
    dataVector.insert(dataVector.end(), 1, data);
    dataVector.insert(dataVector.end(), 1, data);
    dataVector.insert(dataVector.end(), 1, data);
    FUN0(dataVector);
}
void FUN2(vector<char> dataVector);
void FUN3()
{
    char data;
    vector<char> dataVector;
    data = 'C';
    dataVector.insert(dataVector.end(), 1, data);
    dataVector.insert(dataVector.end(), 1, data);
    dataVector.insert(dataVector.end(), 1, data);
    FUN2(dataVector);
}
} 
using namespace std;
namespace NAMESPACE0
{
void FUN0(vector<char> dataVector)
{
    char data = dataVector[2];
    data = 'Z';
    printHexCharLine(data);
}
void FUN2(vector<char> dataVector)
{
    char data = dataVector[2];
    printHexCharLine(data);
}
} 
