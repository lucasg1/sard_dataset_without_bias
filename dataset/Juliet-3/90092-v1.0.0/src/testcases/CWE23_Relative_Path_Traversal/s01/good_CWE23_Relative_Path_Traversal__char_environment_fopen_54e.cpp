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
void FUN1(char * data);
void FUN3()
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
void FUN5(char * data);
void FUN0(char * data)
{
    FUN5(data);
}
} 
namespace NAMESPACE0
{
void FUN7(char * data);
void FUN5(char * data)
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
