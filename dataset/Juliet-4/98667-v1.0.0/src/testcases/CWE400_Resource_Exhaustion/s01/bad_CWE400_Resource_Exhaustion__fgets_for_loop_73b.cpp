using namespace std;
namespace NAMESPACE0
{
void FUN0(list<int> countList);
void FUN1()
{
    int count;
    list<int> countList;
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
    countList.push_back(count);
    countList.push_back(count);
    countList.push_back(count);
    FUN0(countList);
}
} 
using namespace std;
namespace NAMESPACE0
{
void FUN0(list<int> countList)
{
    int count = countList.back();
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
