using namespace std;
namespace NAMESPACE0
{
void FUN0(map<int, HANDLE> dataMap);
void FUN1()
{
    HANDLE data;
    map<int, HANDLE> dataMap;
    data = INVALID_HANDLE_VALUE; 
    data = CreateFile("GoodSource_w32CreateFile.txt",
                      (GENERIC_WRITE|GENERIC_READ),
                      0,
                      NULL,
                      OPEN_ALWAYS,
                      FILE_ATTRIBUTE_NORMAL,
                      NULL);
    dataMap[0] = data;
    dataMap[1] = data;
    dataMap[2] = data;
    FUN0(dataMap);
}
void FUN2(map<int, HANDLE> dataMap);
void FUN3()
{
    HANDLE data;
    map<int, HANDLE> dataMap;
    data = INVALID_HANDLE_VALUE; 
    data = CreateFile("BadSource_w32CreateFile.txt",
                      (GENERIC_WRITE|GENERIC_READ),
                      0,
                      NULL,
                      OPEN_ALWAYS,
                      FILE_ATTRIBUTE_NORMAL,
                      NULL);
    CloseHandle(data);
    dataMap[0] = data;
    dataMap[1] = data;
    dataMap[2] = data;
    FUN2(dataMap);
}
} 
using namespace std;
namespace NAMESPACE0
{
void FUN0(map<int, HANDLE> dataMap)
{
    HANDLE data = dataMap[2];
    CloseHandle(data);
}
void FUN2(map<int, HANDLE> dataMap)
{
    HANDLE data = dataMap[2];
    ; 
}
} 
