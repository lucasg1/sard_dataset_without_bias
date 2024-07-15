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
        int fileDesc;
        fileDesc = OPEN(data, O_RDWR|O_CREAT, S_IREAD|S_IWRITE);
        if (fileDesc != -1)
        {
            CLOSE(fileDesc);
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
        int fileDesc;
        fileDesc = OPEN(data, O_RDWR|O_CREAT, S_IREAD|S_IWRITE);
        if (fileDesc != -1)
        {
            CLOSE(fileDesc);
        }
    }
}
} 
