using namespace std;
namespace NAMESPACE0
{
void FUN0(map<int, char> dataMap);
void FUN1()
{
    char data;
    map<int, char> dataMap;
    data = ' ';
    data = 'a';
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
        char charArraySink[4];
        charArraySink[0] = 'x';
        charArraySink[1] = data;
        charArraySink[2] = 'z';
        charArraySink[3] = '\0';
        printLine(charArraySink);
    }
}
} 
