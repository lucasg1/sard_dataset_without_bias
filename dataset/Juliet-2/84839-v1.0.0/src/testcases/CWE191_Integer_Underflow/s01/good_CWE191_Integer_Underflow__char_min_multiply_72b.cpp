using namespace std;
namespace NAMESPACE0
{
void FUN0(vector<char> dataVector);
void FUN1()
{
    char data;
    vector<char> dataVector;
    data = ' ';
    data = -2;
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
    data = ' ';
    data = CHAR_MIN;
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
    if(data < 0) 
    {
        char result = data * 2;
        printHexCharLine(result);
    }
}
void FUN2(vector<char> dataVector)
{
    char data = dataVector[2];
    if(data < 0) 
    {
        if (data > (CHAR_MIN/2))
        {
            char result = data * 2;
            printHexCharLine(result);
        }
        else
        {
            printLine("data value is too small to perform multiplication.");
        }
    }
}
} 
