using namespace std;
namespace NAMESPACE0
{
void FUN0(map<int, int> countMap);
void FUN1()
{
    int count;
    map<int, int> countMap;
    count = -1;
    fscanf(stdin, "%d", &count);
    countMap[0] = count;
    countMap[1] = count;
    countMap[2] = count;
    FUN0(countMap);
}
} 
using namespace std;
namespace NAMESPACE0
{
void FUN0(map<int, int> countMap)
{
    int count = countMap[2];
    {
        size_t i = 0;
<START>
        for (i = 0; i < (size_t)count; i++)
<END>
        {
            printLine("Hello");
        }
    }
}
} 
