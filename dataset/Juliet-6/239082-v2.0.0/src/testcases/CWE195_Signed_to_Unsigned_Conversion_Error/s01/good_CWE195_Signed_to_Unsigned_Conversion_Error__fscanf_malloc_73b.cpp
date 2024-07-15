using namespace std;
namespace NAMESPACE0
{
void FUN0(list<int> dataList);
void FUN1()
{
    int data;
    list<int> dataList;
    data = -1;
    data = 100-1;
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
    if (data < 100)
    {
        char * dataBuffer = (char *)malloc(data);
        if (dataBuffer == NULL) {exit(-1);}
        memset(dataBuffer, 'A', data-1);
        dataBuffer[data-1] = '\0';
        printLine(dataBuffer);
        free(dataBuffer);
    }
}
} 
