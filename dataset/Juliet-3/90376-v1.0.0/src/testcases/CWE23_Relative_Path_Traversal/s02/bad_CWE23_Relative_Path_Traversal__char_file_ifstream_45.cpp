using namespace std;
namespace NAMESPACE0
{
static char * VAR1;
static char * VAR2;
void FUN0()
{
    char * data = VAR1;
    {
        ifstream inputFile;
<START>
        inputFile.open((char *)data);
<END>
        inputFile.close();
    }
}
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
    VAR1 = data;
    FUN0();
}
} 
