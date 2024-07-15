using namespace std;
namespace NAMESPACE0
{
void FUN0(list<wchar_t *> dataList);
void FUN1()
{
    wchar_t * data;
    list<wchar_t *> dataList;
    wchar_t dataBuffer[100] = COMMAND_ARG2;
    data = dataBuffer;
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
    EXECL(COMMAND_INT_PATH, COMMAND_INT_PATH, COMMAND_ARG1, COMMAND_ARG3, NULL);
}
} 
