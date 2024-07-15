namespace NAMESPACE0
{
void FUN0()
{
    char * data;
    char * &dataRef = data;
    char dataBuffer[FILENAME_MAX] = BASEPATH;
    data = dataBuffer;
    strcat(data, "file.txt");
    {
        char * data = dataRef;
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
} 
