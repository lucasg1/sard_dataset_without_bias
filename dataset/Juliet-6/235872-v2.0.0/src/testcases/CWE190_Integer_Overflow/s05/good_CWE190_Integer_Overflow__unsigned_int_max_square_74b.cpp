using namespace std;
namespace NAMESPACE0
{
void FUN0(map<int, unsigned int> dataMap);
void FUN1()
{
    unsigned int data;
    map<int, unsigned int> dataMap;
    data = 0;
    data = 2;
    dataMap[0] = data;
    dataMap[1] = data;
    dataMap[2] = data;
    FUN0(dataMap);
}
void FUN2(map<int, unsigned int> dataMap);
void FUN3()
{
    unsigned int data;
    map<int, unsigned int> dataMap;
    data = 0;
    data = UINT_MAX;
    dataMap[0] = data;
    dataMap[1] = data;
    dataMap[2] = data;
    FUN2(dataMap);
}
} 
using namespace std;
namespace NAMESPACE0
{
void FUN0(map<int, unsigned int> dataMap)
{
    unsigned int data = dataMap[2];
    {
        unsigned int result = data * data;
        printUnsignedLine(result);
    }
}
void FUN2(map<int, unsigned int> dataMap)
{
    unsigned int data = dataMap[2];
    if (abs((long)data) < (long)sqrt((double)UINT_MAX))
    {
        unsigned int result = data * data;
        printUnsignedLine(result);
    }
    else
    {
        printLine("data value is too large to perform arithmetic safely.");
    }
}
} 
