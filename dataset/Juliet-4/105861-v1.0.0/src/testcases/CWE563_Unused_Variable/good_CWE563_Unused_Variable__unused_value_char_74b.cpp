using namespace std;
namespace NAMESPACE0
{
void FUN0(map<int, char> dataMap);
void FUN1()
{
    char data;
    map<int, char> dataMap;
    data = 'C';
    printHexCharLine(data);
    dataMap[0] = data;
    dataMap[1] = data;
    dataMap[2] = data;
    FUN0(dataMap);
}
void FUN2(map<int, char> dataMap);
void FUN3()
{
    char data;
    map<int, char> dataMap;
    data = 'C';
    dataMap[0] = data;
    dataMap[1] = data;
    dataMap[2] = data;
    FUN2(dataMap);
}
} 
using namespace std;
namespace NAMESPACE0
{
void FUN0(map<int, char> dataMap)
{
    char data = dataMap[2];
    data = 'Z';
    printHexCharLine(data);
}
void FUN2(map<int, char> dataMap)
{
    char data = dataMap[2];
    printHexCharLine(data);
}
} 
