using namespace std;
namespace NAMESPACE0
{
void FUN0(map<int, char> dataMap);
void FUN1()
{
    char data;
    map<int, char> dataMap;
    data = ' ';
    data = (char)RAND32();
    dataMap[0] = data;
    dataMap[1] = data;
    dataMap[2] = data;
    FUN0(dataMap);
}
} 
using namespace std;
namespace NAMESPACE0
{
void FUN0(map<int, char> dataMap)
{
    char data = dataMap[2];
    {
<START>
        char result = data * data;
<END>
        printHexCharLine(result);
    }
}
} 
