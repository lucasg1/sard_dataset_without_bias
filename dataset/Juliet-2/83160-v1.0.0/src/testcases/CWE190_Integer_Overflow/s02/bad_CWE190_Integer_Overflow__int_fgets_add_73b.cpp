using namespace std;
namespace NAMESPACE0
{
void FUN0(list<int> dataList);
void FUN1()
{
    int data;
    list<int> dataList;
    data = 0;
    {
        char inputBuffer[CHAR_ARRAY_SIZE] = "";
        if (fgets(inputBuffer, CHAR_ARRAY_SIZE, stdin) != NULL)
        {
            data = atoi(inputBuffer);
        }
        else
        {
            printLine("fgets() failed.");
        }
    }
    dataList.push_back(data);
    dataList.push_back(data);
    dataList.push_back(data);
    FUN0(dataList);
}
} 
using namespace std;
namespace NAMESPACE0
{
void FUN0(list<int> dataList)
{
    int data = dataList.back();
    {
<START>
        int result = data + 1;
<END>
        printIntLine(result);
    }
}
} 
