using namespace std;
namespace NAMESPACE0
{
void FUN0()
{
    int i;
    char * data;
    char dataBuffer[FILENAME_MAX] = "";
    data = dataBuffer;
    for(i = 0; i < 1; i++)
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
    {
        ofstream outputFile;
<START>
        outputFile.open((char *)data);
<END>
        outputFile.close();
    }
}
} 
