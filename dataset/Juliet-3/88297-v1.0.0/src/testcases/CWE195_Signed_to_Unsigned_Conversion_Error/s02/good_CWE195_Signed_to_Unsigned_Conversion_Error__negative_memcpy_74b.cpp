using namespace std;
namespace NAMESPACE0
{
void FUN0(map<int, int> dataMap);
void FUN1()
{
    int data;
    map<int, int> dataMap;
    data = -1;
    data = 100-1;
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
        char source[100];
        char dest[100] = "";
        memset(source, 'A', 100-1);
        source[100-1] = '\0';
        if (data < 100)
        {
            memcpy(dest, source, data);
            dest[data] = '\0'; 
        }
        printLine(dest);
    }
}
} 
