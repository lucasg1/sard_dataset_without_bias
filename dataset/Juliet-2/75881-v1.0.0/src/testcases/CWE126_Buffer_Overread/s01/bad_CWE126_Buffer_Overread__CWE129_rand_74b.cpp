using namespace std;
namespace NAMESPACE0
{
void FUN0(map<int, int> dataMap);
void FUN1()
{
    int data;
    map<int, int> dataMap;
    data = -1;
    data = RAND32();
    dataMap[0] = data;
    dataMap[1] = data;
    dataMap[2] = data;
    FUN0(dataMap);
}
} 
using namespace std;
namespace NAMESPACE0
{
void FUN0(map<int, int> dataMap)
{
    int data = dataMap[2];
    {
        int buffer[10] = { 0 };
        if (data >= 0)
        {
<START>
            printIntLine(buffer[data]);
<END>
        }
        else
        {
            printLine("ERROR: Array index is negative");
        }
    }
}
} 
