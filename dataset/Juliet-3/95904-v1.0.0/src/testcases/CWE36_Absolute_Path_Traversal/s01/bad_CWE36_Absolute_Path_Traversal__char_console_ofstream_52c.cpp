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
void FUN3()
{
    char * data;
    char dataBuffer[FILENAME_MAX] = "";
    data = dataBuffer;
    {
        size_t dataLen = strlen(data);
        if (FILENAME_MAX-dataLen > 1)
        {
            if (fgets(data+dataLen, (int)(FILENAME_MAX-dataLen), stdin) != NULL)
            {
                dataLen = strlen(data);
                if (dataLen > 0 && data[dataLen-1] == '\n')
                {
                    data[dataLen-1] = '\0';
                }
            }
            else
            {
                printLine("fgets() failed");
                data[dataLen] = '\0';
            }
        }
    }
    FUN1(data);
}
} 
using namespace std;
namespace NAMESPACE0
{
void FUN0(char * data)
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
