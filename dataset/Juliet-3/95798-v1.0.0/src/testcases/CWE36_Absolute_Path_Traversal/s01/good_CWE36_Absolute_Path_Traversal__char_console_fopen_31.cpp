namespace NAMESPACE0
{
void FUN0()
{
    char * data;
    char dataBuffer[FILENAME_MAX] = "";
    data = dataBuffer;
    strcat(data, "c:\\temp\\file.txt");
    strcat(data, "/tmp/file.txt");
    {
        char * dataCopy = data;
        char * data = dataCopy;
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
