using namespace std;
namespace NAMESPACE0
{
void FUN0(list<int> dataList);
void FUN1()
{
    int data;
    list<int> dataList;
    data = -1;
    data = 7;
    dataList.push_back(data);
    dataList.push_back(data);
    dataList.push_back(data);
    FUN0(dataList);
}
void FUN2(list<int> dataList);
void FUN3()
{
    int data;
    list<int> dataList;
    data = -1;
    data = -5;
    dataList.push_back(data);
    dataList.push_back(data);
    dataList.push_back(data);
    FUN2(dataList);
}
} 
using namespace std;
namespace NAMESPACE0
{
void FUN0(list<int> dataList)
{
    int data = dataList.back();
    {
        int buffer[10] = { 0 };
        if (data < 10)
        {
            printIntLine(buffer[data]);
        }
        else
        {
            printLine("ERROR: Array index is too big.");
        }
    }
}
void FUN2(list<int> dataList)
{
    int data = dataList.back();
    {
        int buffer[10] = { 0 };
        if (data >= 0 && data < (10))
        {
            printIntLine(buffer[data]);
        }
        else
        {
            printLine("ERROR: Array index is out-of-bounds");
        }
    }
}
} 
