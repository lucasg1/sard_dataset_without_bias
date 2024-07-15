using namespace std;
namespace NAMESPACE0
{
void FUN0(char * data);
void FUN1(char * data)
{
    FUN0(data);
}
} 
using namespace std;
namespace NAMESPACE0
{
void FUN1(char * data);
void FUN3(char * data)
{
    FUN1(data);
}
} 
using namespace std;
namespace NAMESPACE0
{
void FUN4(char * data);
void FUN0(char * data)
{
    FUN4(data);
}
} 
using namespace std;
namespace NAMESPACE0
{
void FUN3(char * data);
void FUN7()
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
    FUN3(data);
}
} 
using namespace std;
namespace NAMESPACE0
{
void FUN4(char * data)
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
