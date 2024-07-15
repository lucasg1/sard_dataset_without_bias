using namespace std;
namespace NAMESPACE0
{
void FUN0(vector<char *> dataVector);
void FUN1()
{
    char * data;
    vector<char *> dataVector;
    char data_buf[100] = FULL_COMMAND;
    data = data_buf;
    {
        size_t dataLen = strlen(data);
        char * environment = GETENV(ENV_VARIABLE);
        if (environment != NULL)
        {
            strncat(data+dataLen, environment, 100-dataLen-1);
        }
    }
    dataVector.insert(dataVector.end(), 1, data);
    dataVector.insert(dataVector.end(), 1, data);
    dataVector.insert(dataVector.end(), 1, data);
    FUN0(dataVector);
}
} 
using namespace std;
namespace NAMESPACE0
{
void FUN0(vector<char *> dataVector)
{
    char * data = dataVector[2];
    {
        FILE *pipe;
<START>
        pipe = POPEN(data, "w");
<END>
        if (pipe != NULL)
        {
            PCLOSE(pipe);
        }
    }
}
} 
