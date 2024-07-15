namespace NAMESPACE0
{
void FUN0(char * &data)
{
    strcat(data, "c:\\temp\\file.txt");
    strcat(data, "/tmp/file.txt");
}
void FUN1()
{
    char * data;
    char dataBuffer[FILENAME_MAX] = "";
    data = dataBuffer;
    FUN0(data);
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
