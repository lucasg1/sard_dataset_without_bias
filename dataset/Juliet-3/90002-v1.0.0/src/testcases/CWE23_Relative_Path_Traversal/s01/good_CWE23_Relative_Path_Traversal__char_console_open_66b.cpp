namespace NAMESPACE0
{
void FUN0(char * dataArray[]);
void FUN1()
{
    char * data;
    char * dataArray[5];
    char dataBuffer[FILENAME_MAX] = BASEPATH;
    data = dataBuffer;
    strcat(data, "file.txt");
    dataArray[2] = data;
    FUN0(dataArray);
}
} 
namespace NAMESPACE0
{
void FUN0(char * dataArray[])
{
    char * data = dataArray[2];
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
