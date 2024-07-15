using namespace std;
namespace NAMESPACE0
{
void FUN0(map<int, wchar_t> dataMap);
void FUN1()
{
    wchar_t data;
    map<int, wchar_t> dataMap;
    data = L'W';
    dataMap[0] = data;
    dataMap[1] = data;
    dataMap[2] = data;
    FUN0(dataMap);
}
} 
using namespace std;
namespace NAMESPACE0
{
void FUN0(map<int, wchar_t> dataMap)
{
    wchar_t data = dataMap[2];
<START>
    data = L'Z';
<END>
    printf("%02lx\n", data);
}
} 
