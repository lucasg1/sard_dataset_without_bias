static int staticFive = 5;
namespace NAMESPACE0
{
void FUN0()
{
    char * data;
    char dataBuffer[FILENAME_MAX] = "";
    data = dataBuffer;
    if(staticFive!=5)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        strcat(data, "c:\\temp\\file.txt");
        strcat(data, "/tmp/file.txt");
    }
    {
        FILE *pFile = NULL;
        pFile = FOPEN(data, "wb+");
        if (pFile != NULL)
        {
            fclose(pFile);
        }
    }
}
void FUN1()
{
    char * data;
    char dataBuffer[FILENAME_MAX] = "";
    data = dataBuffer;
    if(staticFive==5)
    {
        strcat(data, "c:\\temp\\file.txt");
        strcat(data, "/tmp/file.txt");
    }
    {
        FILE *pFile = NULL;
        pFile = FOPEN(data, "wb+");
        if (pFile != NULL)
        {
            fclose(pFile);
        }
    }
}
} 
