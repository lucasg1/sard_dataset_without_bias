namespace NAMESPACE0
{
void FUN0(char * data);
void FUN1(char * data)
{
    FUN0(data);
}
} 
namespace NAMESPACE0
{
void FUN2(char * data);
void FUN3()
{
    char * data;
    char dataBuffer[FILENAME_MAX] = BASEPATH;
    data = dataBuffer;
    strcat(data, "file.txt");
    FUN2(data);
}
} 
namespace NAMESPACE0
{
void FUN1(char * data);
void FUN6(char * data)
{
    FUN1(data);
}
} 
namespace NAMESPACE0
{
void FUN6(char * data);
void FUN2(char * data)
{
    FUN6(data);
}
} 
namespace NAMESPACE0
{
void FUN0(char * data)
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
