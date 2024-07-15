namespace NAMESPACE0
{
void FUN0()
{
    char * data;
    char dataBuffer[FILENAME_MAX] = "";
    data = dataBuffer;
    if(globalReturnsTrueOrFalse())
    {
        {
            size_t dataLen = strlen(data);
            char * environment = GETENV(ENV_VARIABLE);
            if (environment != NULL)
            {
                strncat(data+dataLen, environment, FILENAME_MAX-dataLen-1);
            }
        }
    }
    else
    {
        strcat(data, "c:\\temp\\file.txt");
        strcat(data, "/tmp/file.txt");
    }
    {
        FILE *pFile = NULL;
<START>
        pFile = FOPEN(data, "wb+");
<END>
        if (pFile != NULL)
        {
            fclose(pFile);
        }
    }
}
} 
