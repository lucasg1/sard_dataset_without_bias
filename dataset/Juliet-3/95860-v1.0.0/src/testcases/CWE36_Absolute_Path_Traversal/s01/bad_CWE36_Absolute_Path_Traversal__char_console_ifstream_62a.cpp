using namespace std;
namespace NAMESPACE0
{
void FUN0(char * &data)
{
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
}
} 
using namespace std;
namespace NAMESPACE0
{
void FUN0(char * &data);
void FUN2()
{
    char * data;
    char dataBuffer[FILENAME_MAX] = "";
    data = dataBuffer;
    FUN0(data);
    {
        ifstream inputFile;
<START>
        inputFile.open((char *)data);
<END>
        inputFile.close();
    }
}
} 
