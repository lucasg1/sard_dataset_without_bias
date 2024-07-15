namespace NAMESPACE0
{
void FUN0(char * data);
void FUN1()
{
    char * data;
    char dataBuffer[FILENAME_MAX] = BASEPATH;
    data = dataBuffer;
    strcat(data, "file.txt");
    FUN0(data);
}
} 
namespace NAMESPACE0
{
void FUN3(char * data);
void FUN0(char * data)
{
    FUN3(data);
}
} 
namespace NAMESPACE0
{
void FUN3(char * data)
{
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
