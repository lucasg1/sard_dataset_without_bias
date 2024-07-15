namespace NAMESPACE0
{
void FUN0()
{
    int h;
    char * data;
    char dataBuffer[FILENAME_MAX] = "";
    data = dataBuffer;
    for(h = 0; h < 1; h++)
    {
        strcat(data, "c:\\temp\\file.txt");
        strcat(data, "/tmp/file.txt");
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
