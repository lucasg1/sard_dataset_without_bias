using namespace std;
namespace NAMESPACE0
{
void FUN0(vector<char> dataVector);
void FUN1()
{
    char data;
    vector<char> dataVector;
    data = ' ';
    data = CHAR_MIN;
    dataVector.insert(dataVector.end(), 1, data);
    dataVector.insert(dataVector.end(), 1, data);
    dataVector.insert(dataVector.end(), 1, data);
    FUN0(dataVector);
}
} 
using namespace std;
namespace NAMESPACE0
{
void FUN0(vector<char> dataVector)
{
    char data = dataVector[2];
    {
<START>
        char result = data - 1;
<END>
        printHexCharLine(result);
    }
}
} 
