typedef union
{
    char * unionFirst;
    char * unionSecond;
} CWE78_OS_Command_Injection__char_file_execlp_34_unionType;
void FUN0()
{
    char * data;
    CWE78_OS_Command_Injection__char_file_execlp_34_unionType myUnion;
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
    myUnion.unionFirst = data;
    {
        char * data = myUnion.unionSecond;
<START>
        EXECLP(COMMAND_INT, COMMAND_INT, COMMAND_ARG1, COMMAND_ARG3, NULL);
<END>
    }
}
