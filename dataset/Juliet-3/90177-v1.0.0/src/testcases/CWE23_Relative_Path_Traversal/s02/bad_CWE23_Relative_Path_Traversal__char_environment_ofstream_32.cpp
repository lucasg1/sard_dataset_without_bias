using namespace std;
namespace NAMESPACE0
{
void FUN0()
{
    char * data;
    char * *dataPtr1 = &data;
    char * *dataPtr2 = &data;
    char dataBuffer[FILENAME_MAX] = BASEPATH;
    data = dataBuffer;
    {
        char * data = *dataPtr1;
        {
            size_t dataLen = strlen(data);
            char * environment = GETENV(ENV_VARIABLE);
            if (environment != NULL)
            {
                strncat(data+dataLen, environment, FILENAME_MAX-dataLen-1);
            }
        }
        *dataPtr1 = data;
    }
    {
        char * data = *dataPtr2;
        {
            ofstream outputFile;
<START>
            outputFile.open((char *)data);
<END>
            outputFile.close();
        }
    }
}
} 
