using namespace std;
namespace NAMESPACE0
{
void FUN0(vector<int> dataVector);
void FUN1()
{
    int data;
    vector<int> dataVector;
    data = -1;
    data = SHRT_MAX + 5;
    dataVector.insert(dataVector.end(), 1, data);
    dataVector.insert(dataVector.end(), 1, data);
    dataVector.insert(dataVector.end(), 1, data);
    FUN0(dataVector);
}
} 
using namespace std;
namespace NAMESPACE0
{
void FUN0(vector<int> dataVector)
{
    int data = dataVector[2];
    {
<START>
        char charData = (char)data;
<END>
        printHexCharLine(charData);
    }
}
} 
