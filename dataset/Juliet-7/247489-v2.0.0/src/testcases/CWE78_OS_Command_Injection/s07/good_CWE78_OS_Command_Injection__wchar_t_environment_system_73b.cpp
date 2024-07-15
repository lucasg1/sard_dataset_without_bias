using namespace std;
namespace NAMESPACE0
{
void FUN0(list<wchar_t *> dataList);
void FUN1()
{
    wchar_t * data;
    list<wchar_t *> dataList;
    wchar_t data_buf[100] = FULL_COMMAND;
    data = data_buf;
    wcscat(data, L"*.*");
    dataList.push_back(data);
    dataList.push_back(data);
    dataList.push_back(data);
    FUN0(dataList);
}
} 
using namespace std;
namespace NAMESPACE0
{
void FUN0(list<wchar_t *> dataList)
{
    wchar_t * data = dataList.back();
    if (SYSTEM(data) != 0)
    {
        printLine("command execution failed!");
        exit(1);
    }
}
} 
