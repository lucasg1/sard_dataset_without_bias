using namespace std;
namespace NAMESPACE0
{
void FUN0(map<int, float> dataMap);
void FUN1()
{
    float data;
    map<int, float> dataMap;
    data = 0.0F;
    data = 2.0F;
    dataMap[0] = data;
    dataMap[1] = data;
    dataMap[2] = data;
    FUN0(dataMap);
}
void FUN2(map<int, float> dataMap);
void FUN3()
{
    float data;
    map<int, float> dataMap;
    data = 0.0F;
    fscanf (stdin, "%f", &data);
    dataMap[0] = data;
    dataMap[1] = data;
    dataMap[2] = data;
    FUN2(dataMap);
}
} 
using namespace std;
namespace NAMESPACE0
{
void FUN0(map<int, float> dataMap)
{
    float data = dataMap[2];
    {
        int result = (int)(100.0 / data);
        printIntLine(result);
    }
}
void FUN2(map<int, float> dataMap)
{
    float data = dataMap[2];
    if(fabs(data) > 0.000001)
    {
        int result = (int)(100.0 / data);
        printIntLine(result);
    }
    else
    {
        printLine("This would result in a divide by zero");
    }
}
} 
