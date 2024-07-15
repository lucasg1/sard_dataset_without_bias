using namespace std;
namespace NAMESPACE0
{
void FUN0(char * &data)
{
    {
        size_t dataLen = strlen(data);
        char * environment = GETENV(ENV_VARIABLE);
        if (environment != NULL)
        {
            strncat(data+dataLen, environment, FILENAME_MAX-dataLen-1);
        }
    }
}
void FUN1()
{
    char * data;
    char dataBuffer[FILENAME_MAX] = BASEPATH;
    data = dataBuffer;
    FUN0(data);
    {
        ofstream outputFile;
<START>
        outputFile.open((char *)data);
<END>
        outputFile.close();
    }
}
} 
