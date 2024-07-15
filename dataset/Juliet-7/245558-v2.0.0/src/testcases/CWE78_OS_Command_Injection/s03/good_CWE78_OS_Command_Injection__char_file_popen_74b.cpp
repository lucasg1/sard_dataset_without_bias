using namespace std;
namespace NAMESPACE0
{
void FUN0(map<int, char *> dataMap);
void FUN1()
{
    char * data;
    map<int, char *> dataMap;
    char data_buf[100] = FULL_COMMAND;
    data = data_buf;
    strcat(data, "*.*");
    dataMap[0] = data;
    dataMap[1] = data;
    dataMap[2] = data;
    FUN0(dataMap);
}
} 
using namespace std;
namespace NAMESPACE0
{
void FUN0(map<int, char *> dataMap)
{
    char * data = dataMap[2];
    {
        FILE *pipe;
        pipe = POPEN(data, "w");
        if (pipe != NULL)
        {
            PCLOSE(pipe);
        }
    }
}
} 
