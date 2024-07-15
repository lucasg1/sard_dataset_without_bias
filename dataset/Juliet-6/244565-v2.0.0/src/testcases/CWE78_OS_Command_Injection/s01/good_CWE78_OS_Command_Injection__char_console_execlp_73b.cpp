using namespace std;
namespace NAMESPACE0
{
void FUN0(list<char *> dataList);
void FUN1()
{
    char * data;
    list<char *> dataList;
    char dataBuffer[100] = COMMAND_ARG2;
    data = dataBuffer;
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
    EXECLP(COMMAND_INT, COMMAND_INT, COMMAND_ARG1, COMMAND_ARG3, NULL);
}
} 
