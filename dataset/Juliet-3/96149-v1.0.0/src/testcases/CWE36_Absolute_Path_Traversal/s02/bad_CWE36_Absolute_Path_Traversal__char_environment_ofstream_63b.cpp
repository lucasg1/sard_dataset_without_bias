using namespace std;
namespace NAMESPACE0
{
void FUN0(char * * dataPtr);
void FUN1()
{
    char * data;
    char dataBuffer[FILENAME_MAX] = "";
    data = dataBuffer;
    {
        size_t dataLen = strlen(data);
        char * environment = GETENV(ENV_VARIABLE);
        if (environment != NULL)
        {
            strncat(data+dataLen, environment, FILENAME_MAX-dataLen-1);
        }
    }
    FUN0(&data);
}
} 
using namespace std;
namespace NAMESPACE0
{
void FUN0(char * * dataPtr)
{
    char * data = *dataPtr;
    {
        ofstream outputFile;
<START>
        outputFile.open((char *)data);
<END>
        outputFile.close();
    }
}
} 
