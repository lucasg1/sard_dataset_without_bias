using namespace std;
namespace NAMESPACE0
{
void FUN0(map<int, FILE *> dataMap);
void FUN1()
{
    FILE * data;
    map<int, FILE *> dataMap;
    data = NULL; 
    data = fopen("GoodSource_fopen.txt", "w+");
    dataMap[0] = data;
    dataMap[1] = data;
    dataMap[2] = data;
    FUN0(dataMap);
}
void FUN2(map<int, FILE *> dataMap);
void FUN3()
{
    FILE * data;
    map<int, FILE *> dataMap;
    data = NULL; 
    data = freopen("BadSource_freopen.txt","w+",stdin);
    fclose(data);
    dataMap[0] = data;
    dataMap[1] = data;
    dataMap[2] = data;
    FUN2(dataMap);
}
} 
using namespace std;
namespace NAMESPACE0
{
void FUN0(map<int, FILE *> dataMap)
{
    FILE * data = dataMap[2];
    fclose(data);
}
void FUN2(map<int, FILE *> dataMap)
{
    FILE * data = dataMap[2];
    ; 
}
} 
