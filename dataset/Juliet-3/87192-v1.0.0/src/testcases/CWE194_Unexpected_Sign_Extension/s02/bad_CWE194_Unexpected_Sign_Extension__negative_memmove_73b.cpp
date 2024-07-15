using namespace std;
namespace NAMESPACE0
{
void FUN0(list<short> dataList);
void FUN1()
{
    short data;
    list<short> dataList;
    data = 0;
    data = -1;
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
