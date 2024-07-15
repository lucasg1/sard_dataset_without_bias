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
    {
        size_t dataLen = strlen(data);
        char * environment = GETENV(ENV_VARIABLE);
        if (environment != NULL)
        {
            strncat(data+dataLen, environment, 100-dataLen-1);
        }
    }
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
    {
        char *args[] = {COMMAND_INT_PATH, COMMAND_ARG1, COMMAND_ARG3, NULL};
<START>
        _spawnvp(_P_WAIT, COMMAND_INT, args);
<END>
    }
}
} 
