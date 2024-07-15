namespace NAMESPACE0
{
void FUN0()
{
    char * data;
    char * *dataPtr1 = &data;
    char * *dataPtr2 = &data;
    char dataBuffer[FILENAME_MAX] = "";
    data = dataBuffer;
    {
        char * data = *dataPtr1;
        strcat(data, "c:\\temp\\file.txt");
        strcat(data, "/tmp/file.txt");
        *dataPtr1 = data;
    }
    {
        char * data = *dataPtr2;
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
