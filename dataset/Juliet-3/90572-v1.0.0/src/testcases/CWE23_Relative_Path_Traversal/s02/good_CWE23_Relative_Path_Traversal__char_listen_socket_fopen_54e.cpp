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
void FUN0(char * data)
{
    FUN2(data);
}
} 
namespace NAMESPACE0
{
void FUN1(char * data);
void FUN5()
{
    char * data;
    char dataBuffer[FILENAME_MAX] = BASEPATH;
    data = dataBuffer;
    strcat(data, "file.txt");
    FUN1(data);
}
} 
namespace NAMESPACE0
{
void FUN7(char * data);
void FUN2(char * data)
{
    FUN7(data);
}
} 
namespace NAMESPACE0
{
void FUN7(char * data)
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
