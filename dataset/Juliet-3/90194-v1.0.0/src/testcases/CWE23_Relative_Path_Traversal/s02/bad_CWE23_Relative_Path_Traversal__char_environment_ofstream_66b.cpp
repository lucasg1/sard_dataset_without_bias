using namespace std;
namespace NAMESPACE0
{
void FUN0(char * dataArray[]);
void FUN1()
{
    char * data;
    char * dataArray[5];
    char dataBuffer[FILENAME_MAX] = BASEPATH;
    data = dataBuffer;
    {
        size_t dataLen = strlen(data);
        char * environment = GETENV(ENV_VARIABLE);
        if (environment != NULL)
        {
            strncat(data+dataLen, environment, FILENAME_MAX-dataLen-1);
        }
    }
    dataArray[2] = data;
    FUN0(dataArray);
}
} 
using namespace std;
namespace NAMESPACE0
{
void FUN0(char * dataArray[])
{
    char * data = dataArray[2];
    {
        ofstream outputFile;
<START>
        outputFile.open((char *)data);
<END>
        outputFile.close();
    }
}
} 
