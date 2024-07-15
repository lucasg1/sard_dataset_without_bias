using namespace std;
namespace NAMESPACE0
{
void FUN0(list<char> dataList);
void FUN1()
{
    char data;
    list<char> dataList;
    data = ' ';
    data = -2;
    dataList.push_back(data);
    dataList.push_back(data);
    dataList.push_back(data);
    FUN0(dataList);
}
void FUN2(list<char> dataList);
void FUN3()
{
    char data;
    list<char> dataList;
    data = ' ';
    data = (char)RAND32();
    dataList.push_back(data);
    dataList.push_back(data);
    dataList.push_back(data);
    FUN2(dataList);
}
} 
using namespace std;
namespace NAMESPACE0
{
void FUN0(list<char> dataList)
{
    char data = dataList.back();
    if(data < 0) 
    {
        char result = data * 2;
        printHexCharLine(result);
    }
}
void FUN2(list<char> dataList)
{
    char data = dataList.back();
    if(data < 0) 
    {
        if (data > (CHAR_MIN/2))
        {
            char result = data * 2;
            printHexCharLine(result);
        }
        else
        {
            printLine("data value is too small to perform multiplication.");
        }
    }
}
} 
