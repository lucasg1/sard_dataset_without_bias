using namespace std;
namespace NAMESPACE0
{
void FUN0(map<int, float> dataMap);
void FUN1()
{
    float data;
    map<int, float> dataMap;
    data = 0.0F;
    {
        char inputBuffer[CHAR_ARRAY_SIZE];
        if (fgets(inputBuffer, CHAR_ARRAY_SIZE, stdin) != NULL)
        {
            data = (float)atof(inputBuffer);
        }
        else
        {
            printLine("fgets() failed.");
        }
    }
    dataMap[0] = data;
    dataMap[1] = data;
    dataMap[2] = data;
    FUN0(dataMap);
}
} 
using namespace std;
namespace NAMESPACE0
{
void FUN0(map<int, float> dataMap)
{
    float data = dataMap[2];
    {
<START>
        int result = (int)(100.0 / data);
<END>
        printIntLine(result);
    }
}
} 
