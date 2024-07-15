using namespace std;
namespace NAMESPACE0
{
void FUN0(map<int, unsigned int> dataMap);
void FUN1()
{
    unsigned int data;
    map<int, unsigned int> dataMap;
    data = 0;
    data = -2;
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
    data = (unsigned int)RAND32();
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
        unsigned int result = data - 1;
        printUnsignedLine(result);
    }
}
void FUN2(map<int, unsigned int> dataMap)
{
    unsigned int data = dataMap[2];
    if (data > 0)
    {
        unsigned int result = data - 1;
        printUnsignedLine(result);
    }
    else
    {
        printLine("data value is too large to perform subtraction.");
    }
}
} 
