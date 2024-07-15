using namespace std;
namespace NAMESPACE0
{
void FUN0(list<short> dataList);
void FUN1()
{
    short data;
    list<short> dataList;
    data = -1;
    data = CHAR_MAX + 1;
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
        char charData = (char)data;
<END>
        printHexCharLine(charData);
    }
}
} 
