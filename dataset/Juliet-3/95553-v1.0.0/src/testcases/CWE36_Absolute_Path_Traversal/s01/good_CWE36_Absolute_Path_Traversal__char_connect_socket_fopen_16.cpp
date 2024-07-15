namespace NAMESPACE0
{
void FUN0()
{
    char * data;
    char dataBuffer[FILENAME_MAX] = "";
    data = dataBuffer;
    while(1)
    {
        strcat(data, "c:\\temp\\file.txt");
        strcat(data, "/tmp/file.txt");
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
