using namespace std;
namespace NAMESPACE0
{
void FUN0(list<int> dataList);
void FUN1()
{
    int data;
    list<int> dataList;
    data = -1;
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
        char source[100];
        char dest[100] = "";
        memset(source, 'A', 100-1);
        source[100-1] = '\0';
        if (data < 100)
        {
<START>
            memmove(dest, source, data);
<END>
            dest[data] = '\0'; 
        }
        printLine(dest);
    }
}
} 
