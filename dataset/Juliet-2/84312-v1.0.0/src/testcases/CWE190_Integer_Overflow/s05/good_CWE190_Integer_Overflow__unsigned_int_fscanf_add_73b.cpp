using namespace std;
namespace NAMESPACE0
{
void FUN0(list<unsigned int> dataList);
void FUN1()
{
    unsigned int data;
    list<unsigned int> dataList;
    data = 0;
    data = 2;
    dataList.push_back(data);
    dataList.push_back(data);
    dataList.push_back(data);
    FUN0(dataList);
}
void FUN2(list<unsigned int> dataList);
void FUN3()
{
    unsigned int data;
    list<unsigned int> dataList;
    data = 0;
    fscanf (stdin, "%u", &data);
    dataList.push_back(data);
    dataList.push_back(data);
    dataList.push_back(data);
    FUN2(dataList);
}
} 
using namespace std;
namespace NAMESPACE0
{
void FUN0(list<unsigned int> dataList)
{
    unsigned int data = dataList.back();
    {
        unsigned int result = data + 1;
        printUnsignedLine(result);
    }
}
void FUN2(list<unsigned int> dataList)
{
    unsigned int data = dataList.back();
    if (data < UINT_MAX)
    {
        unsigned int result = data + 1;
        printUnsignedLine(result);
    }
    else
    {
        printLine("data value is too large to perform arithmetic safely.");
    }
}
} 