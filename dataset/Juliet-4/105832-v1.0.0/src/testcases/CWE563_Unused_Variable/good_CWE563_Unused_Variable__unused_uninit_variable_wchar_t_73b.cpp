using namespace std;
namespace NAMESPACE0
{
void FUN0(list<wchar_t> dataList);
void FUN1()
{
    wchar_t data;
    list<wchar_t> dataList;
    ; 
    dataList.push_back(data);
    dataList.push_back(data);
    dataList.push_back(data);
    FUN0(dataList);
}
} 
using namespace std;
namespace NAMESPACE0
{
void FUN0(list<wchar_t> dataList)
{
    wchar_t data = dataList.back();
    data = L'W';
    printWcharLine(data);
}
} 
