using namespace std;
namespace NAMESPACE0
{
void FUN0(map<int, char> dataMap);
void FUN1()
{
    char data;
    map<int, char> dataMap;
    data = ' ';
    data = CHAR_MAX;
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
    if(data > 0) 
    {
<START>
        char result = data * 2;
<END>
        printHexCharLine(result);
    }
}
} 
