using namespace std;
namespace NAMESPACE0
{
void FUN0(map<int, short> dataMap);
void FUN1()
{
    short data;
    map<int, short> dataMap;
    data = 0;
    data = -2;
    dataMap[0] = data;
    dataMap[1] = data;
    dataMap[2] = data;
    FUN0(dataMap);
}
void FUN2(map<int, short> dataMap);
void FUN3()
{
    short data;
    map<int, short> dataMap;
    data = 0;
    data = (short)RAND32();
    dataMap[0] = data;
    dataMap[1] = data;
    dataMap[2] = data;
    FUN2(dataMap);
}
} 
using namespace std;
namespace NAMESPACE0
{
void FUN0(map<int, short> dataMap)
{
    short data = dataMap[2];
    if(data < 0) 
    {
        short result = data * 2;
        printIntLine(result);
    }
}
void FUN2(map<int, short> dataMap)
{
    short data = dataMap[2];
    if(data < 0) 
    {
        if (data > (SHRT_MIN/2))
        {
            short result = data * 2;
            printIntLine(result);
        }
        else
        {
            printLine("data value is too small to perform multiplication.");
        }
    }
}
} 
