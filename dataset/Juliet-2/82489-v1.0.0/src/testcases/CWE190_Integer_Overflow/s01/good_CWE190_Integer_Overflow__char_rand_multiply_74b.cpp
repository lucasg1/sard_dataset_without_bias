using namespace std;
namespace NAMESPACE0
{
void FUN0(map<int, char> dataMap);
void FUN1()
{
    char data;
    map<int, char> dataMap;
    data = ' ';
    data = 2;
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
    data = ' ';
    data = (char)RAND32();
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
    if(data > 0) 
    {
        char result = data * 2;
        printHexCharLine(result);
    }
}
void FUN2(map<int, char> dataMap)
{
    char data = dataMap[2];
    if(data > 0) 
    {
        if (data < (CHAR_MAX/2))
        {
            char result = data * 2;
            printHexCharLine(result);
        }
        else
        {
            printLine("data value is too large to perform arithmetic safely.");
        }
    }
}
} 
