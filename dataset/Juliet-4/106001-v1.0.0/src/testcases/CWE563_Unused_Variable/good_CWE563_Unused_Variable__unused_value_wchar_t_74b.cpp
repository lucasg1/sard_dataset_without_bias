using namespace std;
namespace NAMESPACE0
{
void FUN0(map<int, wchar_t> dataMap);
void FUN1()
{
    wchar_t data;
    map<int, wchar_t> dataMap;
    data = L'W';
    printf("%02lx\n", data);
    dataMap[0] = data;
    dataMap[1] = data;
    dataMap[2] = data;
    FUN0(dataMap);
}
void FUN2(map<int, wchar_t> dataMap);
void FUN3()
{
    wchar_t data;
    map<int, wchar_t> dataMap;
    data = L'W';
    dataMap[0] = data;
    dataMap[1] = data;
    dataMap[2] = data;
    FUN2(dataMap);
}
} 
using namespace std;
namespace NAMESPACE0
{
void FUN0(map<int, wchar_t> dataMap)
{
    wchar_t data = dataMap[2];
    data = L'Z';
    printf("%02lx\n", data);
}
void FUN2(map<int, wchar_t> dataMap)
{
    wchar_t data = dataMap[2];
    printf("%02lx\n", data);
}
} 
