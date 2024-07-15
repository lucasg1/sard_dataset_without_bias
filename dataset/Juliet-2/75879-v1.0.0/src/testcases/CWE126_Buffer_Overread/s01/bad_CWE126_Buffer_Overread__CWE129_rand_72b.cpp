using namespace std;
namespace NAMESPACE0
{
void FUN0(vector<int> dataVector);
void FUN1()
{
    int data;
    vector<int> dataVector;
    data = -1;
    data = RAND32();
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
        int buffer[10] = { 0 };
        if (data >= 0)
        {
<START>
            printIntLine(buffer[data]);
<END>
        }
        else
        {
            printLine("ERROR: Array index is negative");
        }
    }
}
} 
