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
