using namespace std;
namespace NAMESPACE0
{
void FUN0(char * data);
void FUN1()
{
    char * data;
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
    FUN0(data);
}
} 
using namespace std;
namespace NAMESPACE0
{
void FUN2(char * data);
void FUN3(char * data)
{
    FUN2(data);
}
} 
using namespace std;
namespace NAMESPACE0
{
void FUN3(char * data);
void FUN0(char * data)
{
    FUN3(data);
}
} 
using namespace std;
namespace NAMESPACE0
{
void FUN2(char * data)
{
    {
        ofstream outputFile;
<START>
        outputFile.open((char *)data);
<END>
        outputFile.close();
    }
}
} 
