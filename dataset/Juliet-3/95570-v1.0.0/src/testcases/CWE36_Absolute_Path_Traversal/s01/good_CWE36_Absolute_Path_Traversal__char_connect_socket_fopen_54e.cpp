namespace NAMESPACE0
{
void FUN0(char * data);
void FUN1()
{
    char * data;
    char dataBuffer[FILENAME_MAX] = "";
    data = dataBuffer;
    strcat(data, "c:\\temp\\file.txt");
    strcat(data, "/tmp/file.txt");
    FUN0(data);
}
} 
namespace NAMESPACE0
{
void FUN3(char * data);
void FUN4(char * data)
{
    FUN3(data);
}
} 
namespace NAMESPACE0
{
void FUN4(char * data);
void FUN6(char * data)
{
    FUN4(data);
}
} 
namespace NAMESPACE0
{
void FUN6(char * data);
void FUN0(char * data)
{
    FUN6(data);
}
} 
namespace NAMESPACE0
{
void FUN3(char * data)
{
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
