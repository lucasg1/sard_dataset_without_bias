using namespace std;
namespace NAMESPACE0
{
void FUN0(map<int, FILE *> dataMap);
void FUN1()
{
    FILE * data;
    map<int, FILE *> dataMap;
    data = NULL;
    data = _wfopen(L"file.txt", L"w+");
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
        fclose(data);
    }
}
} 
