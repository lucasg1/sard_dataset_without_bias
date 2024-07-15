using namespace std;
namespace NAMESPACE0
{
void FUN0(map<int, short> dataMap);
void FUN1()
{
    short data;
    map<int, short> dataMap;
    data = -1;
    data = CHAR_MAX + 1;
    dataMap[0] = data;
    dataMap[1] = data;
    dataMap[2] = data;
    FUN0(dataMap);
}
} 
using namespace std;
namespace NAMESPACE0
{
void FUN0(map<int, short> dataMap)
{
    short data = dataMap[2];
    {
<START>
        char charData = (char)data;
<END>
        printHexCharLine(charData);
    }
}
} 
