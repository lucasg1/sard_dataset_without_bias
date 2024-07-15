using namespace std;
namespace NAMESPACE0
{
void FUN0(map<int, int> countMap);
void FUN1()
{
    int count;
    map<int, int> countMap;
    count = -1;
    count = 20;
    countMap[0] = count;
    countMap[1] = count;
    countMap[2] = count;
    FUN0(countMap);
}
void FUN2(map<int, int> countMap);
void FUN3()
{
    int count;
    map<int, int> countMap;
    count = -1;
    fscanf(stdin, "%d", &count);
    countMap[0] = count;
    countMap[1] = count;
    countMap[2] = count;
    FUN2(countMap);
}
} 
using namespace std;
namespace NAMESPACE0
{
void FUN0(map<int, int> countMap)
{
    int count = countMap[2];
    SLEEP(count);
    printLine("Sleep time possibly too long");
}
void FUN2(map<int, int> countMap)
{
    int count = countMap[2];
    if (count > 0 && count <= 2000)
    {
        SLEEP(count);
        printLine("Sleep time OK");
    }
    else
    {
        printLine("Sleep time too long");
    }
}
} 
