using namespace std;
namespace NAMESPACE0
{
void FUN0(map<int, unsigned int> dataMap);
void FUN1()
{
    unsigned int data;
    map<int, unsigned int> dataMap;
    data = 0;
    fscanf (stdin, "%u", &data);
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
        unsigned int result = data - 1;
<END>
        printUnsignedLine(result);
    }
}
} 
