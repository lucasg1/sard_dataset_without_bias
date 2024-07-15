using namespace std;
namespace NAMESPACE0
{
void FUN0(vector<char> dataVector);
void FUN1()
{
    char data;
    vector<char> dataVector;
    data = ' ';
    fscanf (stdin, "%c", &data);
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
    if(data < 0) 
    {
<START>
        char result = data * 2;
<END>
        printHexCharLine(result);
    }
}
} 
