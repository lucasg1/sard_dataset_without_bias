using namespace std;
namespace NAMESPACE0
{
void FUN0(map<int, wchar_t *> dataMap);
void FUN1()
{
    wchar_t * data;
    map<int, wchar_t *> dataMap;
    data = NULL;
    wchar_t VAR1;
    data = &VAR1;
    *data = L'A';
    printHexCharLine((char)*data);
    dataMap[0] = data;
    dataMap[1] = data;
    dataMap[2] = data;
    FUN0(dataMap);
}
void FUN2(map<int, wchar_t *> dataMap);
void FUN3()
{
    wchar_t * data;
    map<int, wchar_t *> dataMap;
    data = NULL;
    data = new wchar_t;
    *data = L'A';
    printHexCharLine((char)*data);
    dataMap[0] = data;
    dataMap[1] = data;
    dataMap[2] = data;
    FUN2(dataMap);
}
} 
using namespace std;
namespace NAMESPACE0
{
void FUN0(map<int, wchar_t *> dataMap)
{
    wchar_t * data = dataMap[2];
    ; 
}
void FUN2(map<int, wchar_t *> dataMap)
{
    wchar_t * data = dataMap[2];
    delete data;
}
} 
