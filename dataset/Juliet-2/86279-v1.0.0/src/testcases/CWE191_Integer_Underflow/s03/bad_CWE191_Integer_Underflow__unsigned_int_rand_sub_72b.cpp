using namespace std;
namespace NAMESPACE0
{
void FUN0(vector<unsigned int> dataVector);
void FUN1()
{
    unsigned int data;
    vector<unsigned int> dataVector;
    data = 0;
    data = (unsigned int)RAND32();
    dataVector.insert(dataVector.end(), 1, data);
    dataVector.insert(dataVector.end(), 1, data);
    dataVector.insert(dataVector.end(), 1, data);
    FUN0(dataVector);
}
} 
using namespace std;
namespace NAMESPACE0
{
void FUN0(vector<unsigned int> dataVector)
{
    unsigned int data = dataVector[2];
    {
<START>
        unsigned int result = data - 1;
<END>
        printUnsignedLine(result);
    }
}
} 
