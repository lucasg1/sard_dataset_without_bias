using namespace std;
namespace NAMESPACE0
{
void FUN0(list<char *> dataList);
void FUN1()
{
    char * data;
    list<char *> dataList;
    char data_buf[100] = FULL_COMMAND;
    data = data_buf;
    strcat(data, "*.*");
    dataList.push_back(data);
    dataList.push_back(data);
    dataList.push_back(data);
    FUN0(dataList);
}
} 
using namespace std;
namespace NAMESPACE0
{
void FUN0(list<char *> dataList)
{
    char * data = dataList.back();
    if (SYSTEM(data) != 0)
    {
        printLine("command execution failed!");
        exit(1);
    }
}
} 
