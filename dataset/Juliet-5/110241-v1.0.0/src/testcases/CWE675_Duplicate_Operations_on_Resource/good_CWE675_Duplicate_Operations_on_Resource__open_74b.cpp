using namespace std;
namespace NAMESPACE0
{
void FUN0(map<int, int> dataMap);
void FUN1()
{
    int data;
    map<int, int> dataMap;
    data = -1; 
    data = OPEN("GoodSource_open.txt", O_RDWR|O_CREAT, S_IREAD|S_IWRITE);
    dataMap[0] = data;
    dataMap[1] = data;
    dataMap[2] = data;
    FUN0(dataMap);
}
void FUN2(map<int, int> dataMap);
void FUN3()
{
    int data;
    map<int, int> dataMap;
    data = -1; 
    data = OPEN("BadSource_open.txt", O_RDWR|O_CREAT, S_IREAD|S_IWRITE);
    CLOSE(data);
    dataMap[0] = data;
    dataMap[1] = data;
    dataMap[2] = data;
    FUN2(dataMap);
}
} 
using namespace std;
namespace NAMESPACE0
{
void FUN0(map<int, int> dataMap)
{
    int data = dataMap[2];
    CLOSE(data);
}
void FUN2(map<int, int> dataMap)
{
    int data = dataMap[2];
    ; 
}
} 
