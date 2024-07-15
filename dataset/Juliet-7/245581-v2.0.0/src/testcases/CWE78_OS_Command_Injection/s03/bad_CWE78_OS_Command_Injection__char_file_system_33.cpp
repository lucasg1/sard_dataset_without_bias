namespace NAMESPACE0
{
void FUN0()
{
    char * data;
    char * &dataRef = data;
    char data_buf[100] = FULL_COMMAND;
    data = data_buf;
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
    {
        char * data = dataRef;
<START>
        if (SYSTEM(data) != 0)
<END>
        {
            printLine("command execution failed!");
            exit(1);
        }
    }
}
} 
