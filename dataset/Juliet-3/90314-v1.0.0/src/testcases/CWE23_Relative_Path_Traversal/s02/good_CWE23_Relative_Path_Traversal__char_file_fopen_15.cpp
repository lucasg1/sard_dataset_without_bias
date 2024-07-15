namespace NAMESPACE0
{
void FUN0()
{
    char * data;
    char dataBuffer[FILENAME_MAX] = BASEPATH;
    data = dataBuffer;
    switch(5)
    {
    case 6:
        printLine("Benign, fixed string");
        break;
    default:
        strcat(data, "file.txt");
        break;
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
    char dataBuffer[FILENAME_MAX] = BASEPATH;
    data = dataBuffer;
    switch(6)
    {
    case 6:
        strcat(data, "file.txt");
        break;
    default:
        printLine("Benign, fixed string");
        break;
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
