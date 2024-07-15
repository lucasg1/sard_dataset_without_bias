using namespace std;
namespace NAMESPACE0
{
void FUN0(map<int, FILE *> dataMap);
void FUN1()
{
    FILE * data;
    map<int, FILE *> dataMap;
    data = NULL;
    data = fopen("BadSource_fopen.txt", "w+");
    dataMap[0] = data;
    dataMap[1] = data;
    dataMap[2] = data;
    FUN0(dataMap);
}
} 
using namespace std;
namespace NAMESPACE0
{
void FUN0(map<int, FILE *> dataMap)
{
    FILE * data = dataMap[2];
    if (data != NULL)
    {
<START>
        CloseHandle((HANDLE)data);
<END>
    }
}
} 
