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
    FUN2(countMap);
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
        for (i = 0; i < (size_t)count; i++)
        {
            printLine("Hello");
        }
    }
}
void FUN2(map<int, int> countMap)
{
    int count = countMap[2];
    {
        size_t i = 0;
        if (count > 0 && count <= 20)
        {
            for (i = 0; i < (size_t)count; i++)
            {
                printLine("Hello");
            }
        }
    }
}
} 
