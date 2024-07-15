void FUN0(void * dataVoidPtr);
void FUN1()
{
    char * data;
    char dataBuffer[100] = COMMAND_ARG2;
    data = dataBuffer;
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
    FUN0(&data);
}
void FUN0(void * dataVoidPtr)
{
    char * * dataPtr = (char * *)dataVoidPtr;
    char * data = (*dataPtr);
    {
        char *args[] = {COMMAND_INT_PATH, COMMAND_ARG1, COMMAND_ARG3, NULL};
<START>
        _spawnvp(_P_WAIT, COMMAND_INT, args);
<END>
    }
}
