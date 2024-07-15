using namespace std;
namespace NAMESPACE0
{
void FUN0(vector<int> countVector);
void FUN1()
{
    int count;
    vector<int> countVector;
    count = -1;
    count = 20;
    countVector.insert(countVector.end(), 1, count);
    countVector.insert(countVector.end(), 1, count);
    countVector.insert(countVector.end(), 1, count);
    FUN0(countVector);
}
void FUN2(vector<int> countVector);
void FUN3()
{
    int count;
    vector<int> countVector;
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
    countVector.insert(countVector.end(), 1, count);
    countVector.insert(countVector.end(), 1, count);
    countVector.insert(countVector.end(), 1, count);
    FUN2(countVector);
}
} 
using namespace std;
namespace NAMESPACE0
{
void FUN0(vector<int> countVector)
{
    int count = countVector[2];
    {
        size_t i = 0;
        for (i = 0; i < (size_t)count; i++)
        {
            printLine("Hello");
        }
    }
}
void FUN2(vector<int> countVector)
{
    int count = countVector[2];
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
