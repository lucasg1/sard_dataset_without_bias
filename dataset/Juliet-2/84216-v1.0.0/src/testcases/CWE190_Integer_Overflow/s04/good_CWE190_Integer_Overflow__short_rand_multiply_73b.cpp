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
    data = (short)RAND32();
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
    if(data > 0) 
    {
        short result = data * 2;
        printIntLine(result);
    }
}
void FUN2(list<short> dataList)
{
    short data = dataList.back();
    if(data > 0) 
    {
        if (data < (SHRT_MAX/2))
        {
            short result = data * 2;
            printIntLine(result);
        }
        else
        {
            printLine("data value is too large to perform arithmetic safely.");
        }
    }
}
} 
