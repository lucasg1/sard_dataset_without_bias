using namespace std;
namespace NAMESPACE0
{
void FUN0(map<int, unsigned int> dataMap);
void FUN1()
{
    unsigned int data;
    map<int, unsigned int> dataMap;
    data = 0;
    data = UINT_MAX;
    dataMap[0] = data;
    dataMap[1] = data;
    dataMap[2] = data;
    FUN0(dataMap);
}
} 
using namespace std;
namespace NAMESPACE0
{
void FUN0(map<int, unsigned int> dataMap)
{
    unsigned int data = dataMap[2];
    {
<START>
        unsigned int result = data * data;
<END>
        printUnsignedLine(result);
    }
}
} 
