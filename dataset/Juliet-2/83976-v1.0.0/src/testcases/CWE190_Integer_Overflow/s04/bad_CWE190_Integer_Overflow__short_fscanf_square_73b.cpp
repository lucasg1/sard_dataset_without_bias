using namespace std;
namespace NAMESPACE0
{
void FUN0(list<short> dataList);
void FUN1()
{
    short data;
    list<short> dataList;
    data = 0;
    fscanf (stdin, "%hd", &data);
    dataList.push_back(data);
    dataList.push_back(data);
    dataList.push_back(data);
    FUN0(dataList);
}
} 
using namespace std;
namespace NAMESPACE0
{
void FUN0(list<short> dataList)
{
    short data = dataList.back();
    {
<START>
        short result = data * data;
<END>
        printIntLine(result);
    }
}
} 
