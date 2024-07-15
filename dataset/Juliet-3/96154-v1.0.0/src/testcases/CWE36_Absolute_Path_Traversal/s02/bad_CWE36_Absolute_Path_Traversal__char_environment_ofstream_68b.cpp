using namespace std;
char * VAR0;
char * VAR1;
namespace NAMESPACE2
{
void FUN0();
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
    VAR0 = data;
    FUN0();
}
} 
using namespace std;
extern char * VAR0;
extern char * VAR1;
namespace NAMESPACE2
{
void FUN0()
{
    char * data = VAR0;
    {
        ofstream outputFile;
<START>
        outputFile.open((char *)data);
<END>
        outputFile.close();
    }
}
} 
