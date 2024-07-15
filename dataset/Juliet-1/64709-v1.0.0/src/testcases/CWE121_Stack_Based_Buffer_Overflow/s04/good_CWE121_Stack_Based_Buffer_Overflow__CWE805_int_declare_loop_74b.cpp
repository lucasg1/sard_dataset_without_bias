using namespace std;
namespace NAMESPACE0
{
void FUN0(map<int, int *> dataMap);
void FUN1()
{
    int * data;
    map<int, int *> dataMap;
    int VAR1[50];
    int VAR2[100];
    data = VAR2;
    dataMap[0] = data;
    dataMap[1] = data;
    dataMap[2] = data;
    FUN0(dataMap);
}
} 
using namespace std;
namespace NAMESPACE0
{
void FUN0(map<int, int *> dataMap)
{
    int * data = dataMap[2];
    {
        int source[100] = {0}; 
        {
            size_t i;
            for (i = 0; i < 100; i++)
            {
                data[i] = source[i];
            }
            printIntLine(data[0]);
        }
    }
}
} 
