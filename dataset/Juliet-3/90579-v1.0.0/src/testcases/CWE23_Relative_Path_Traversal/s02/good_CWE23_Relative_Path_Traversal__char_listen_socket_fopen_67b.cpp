namespace NAMESPACE0
{
typedef struct _structType
{
    char * structFirst;
} structType;
void FUN0(structType myStruct);
void FUN1()
{
    char * data;
    structType myStruct;
    char dataBuffer[FILENAME_MAX] = BASEPATH;
    data = dataBuffer;
    strcat(data, "file.txt");
    myStruct.structFirst = data;
    FUN0(myStruct);
}
} 
namespace NAMESPACE0
{
typedef struct _structType
{
    char * structFirst;
} structType;
void FUN0(structType myStruct)
{
    char * data = myStruct.structFirst;
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
