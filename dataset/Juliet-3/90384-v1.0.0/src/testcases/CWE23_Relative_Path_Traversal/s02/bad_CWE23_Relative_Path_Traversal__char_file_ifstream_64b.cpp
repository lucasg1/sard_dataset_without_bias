using namespace std;
namespace NAMESPACE0
{
void FUN0(void * dataVoidPtr);
void FUN1()
{
    char * data;
    char dataBuffer[FILENAME_MAX] = BASEPATH;
    data = dataBuffer;
    {
        size_t dataLen = strlen(data);
        FILE * pFile;
        if (FILENAME_MAX-dataLen > 1)
        {
            pFile = fopen(FILENAME, "r");
            if (pFile != NULL)
            {
                if (fgets(data+dataLen, (int)(FILENAME_MAX-dataLen), pFile) == NULL)
                {
                    printLine("fgets() failed");
                    data[dataLen] = '\0';
                }
                fclose(pFile);
            }
        }
    }
    FUN0(&data);
}
} 
using namespace std;
namespace NAMESPACE0
{
void FUN0(void * dataVoidPtr)
{
    char * * dataPtr = (char * *)dataVoidPtr;
    char * data = (*dataPtr);
    {
        ifstream inputFile;
<START>
        inputFile.open((char *)data);
<END>
        inputFile.close();
    }
}
} 
