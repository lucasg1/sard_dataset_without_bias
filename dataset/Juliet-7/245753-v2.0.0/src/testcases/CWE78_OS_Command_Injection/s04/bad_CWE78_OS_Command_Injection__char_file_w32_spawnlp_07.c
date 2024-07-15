static int staticFive = 5;
void FUN0()
{
    char * data;
    char dataBuffer[100] = COMMAND_ARG2;
    data = dataBuffer;
    if(staticFive==5)
    {
        {
            size_t dataLen = strlen(data);
            FILE * pFile;
            if (100-dataLen > 1)
            {
                pFile = fopen(FILENAME, "r");
                if (pFile != NULL)
                {
                    if (fgets(data+dataLen, (int)(100-dataLen), pFile) == NULL)
                    {
                        printLine("fgets() failed");
                        data[dataLen] = '\0';
                    }
                    fclose(pFile);
                }
            }
        }
    }
<START>
    _spawnlp(_P_WAIT, COMMAND_INT, COMMAND_INT, COMMAND_ARG1, COMMAND_ARG3, NULL);
<END>
}
