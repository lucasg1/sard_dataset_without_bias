char * FUN0(char * data)
{
    {
        size_t dataLen = strlen(data);
        FILE * pFile;
        if (250-dataLen > 1)
        {
            pFile = fopen(FILENAME, "r");
            if (pFile != NULL)
            {
                if (fgets(data+dataLen, (int)(250-dataLen), pFile) == NULL)
                {
                    printLine("fgets() failed");
                    data[dataLen] = '\0';
                }
                fclose(pFile);
            }
        }
    }
    return data;
}
char * FUN0(char * data);
void FUN2()
{
    char * data;
    char dataBuffer[250] = "PATH=";
    data = dataBuffer;
    data = FUN0(data);
<START>
    PUTENV(data);
<END>
}
