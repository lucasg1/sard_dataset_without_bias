using namespace std;
namespace NAMESPACE0
{
void FUN0(list<char> dataList);
void FUN1()
{
    char data;
    list<char> dataList;
    data = ' ';
    data = (char)RAND32();
    dataList.push_back(data);
    dataList.push_back(data);
    dataList.push_back(data);
    FUN0(dataList);
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
<START>
        char result = data * 2;
<END>
        printHexCharLine(result);
    }
}
} 
