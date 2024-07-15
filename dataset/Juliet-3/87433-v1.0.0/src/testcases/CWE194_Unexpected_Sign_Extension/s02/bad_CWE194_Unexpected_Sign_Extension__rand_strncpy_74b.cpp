using namespace std;
namespace NAMESPACE0
{
void FUN0(map<int, short> dataMap);
void FUN1()
{
    short data;
    map<int, short> dataMap;
    data = 0;
    data = (short)RAND32();
    dataMap[0] = data;
    dataMap[1] = data;
    dataMap[2] = data;
    FUN0(dataMap);
}
} 
using namespace std;
namespace NAMESPACE0
{
void FUN0(map<int, short> dataMap)
{
    short data = dataMap[2];
    {
        char source[100];
        char dest[100] = "";
        memset(source, 'A', 100-1);
        source[100-1] = '\0';
        if (data < 100)
        {
<START>
            strncpy(dest, source, data);
<END>
            dest[data] = '\0'; 
        }
        printLine(dest);
    }
}
} 
