using namespace std;
namespace NAMESPACE0
{
void FUN0(list<short> dataList);
void FUN1()
{
    short data;
    list<short> dataList;
    data = 0;
    data = 2;
    dataList.push_back(data);
    dataList.push_back(data);
    dataList.push_back(data);
    FUN0(dataList);
}
void FUN2(list<short> dataList);
void FUN3()
{
    short data;
    list<short> dataList;
    data = 0;
    data = SHRT_MAX;
    dataList.push_back(data);
    dataList.push_back(data);
    dataList.push_back(data);
    FUN2(dataList);
}
} 
using namespace std;
namespace NAMESPACE0
{
void FUN0(list<short> dataList)
{
    short data = dataList.back();
    {
        short result = data * data;
        printIntLine(result);
    }
}
void FUN2(list<short> dataList)
{
    short data = dataList.back();
    if (abs((long)data) <= (long)sqrt((double)SHRT_MAX))
    {
        short result = data * data;
        printIntLine(result);
    }
    else
    {
        printLine("data value is too large to perform arithmetic safely.");
    }
}
} 
