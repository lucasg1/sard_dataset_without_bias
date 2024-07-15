using namespace std;
namespace NAMESPACE0
{
void FUN0(map<int, int> countMap);
void FUN1()
{
    int count;
    map<int, int> countMap;
    count = -1;
    {
        char inputBuffer[CHAR_ARRAY_SIZE] = "";
        if (fgets(inputBuffer, CHAR_ARRAY_SIZE, stdin) != NULL)
        {
            count = atoi(inputBuffer);
        }
        else
        {
            printLine("fgets() failed.");
        }
    }
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
<START>
    SLEEP(count);
<END>
    printLine("Sleep time possibly too long");
}
} 
