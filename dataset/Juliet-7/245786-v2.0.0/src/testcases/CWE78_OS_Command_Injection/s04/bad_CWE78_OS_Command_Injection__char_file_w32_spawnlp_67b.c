typedef struct _CWE78_OS_Command_Injection__char_file_w32_spawnlp_67_structType
{
    char * structFirst;
} CWE78_OS_Command_Injection__char_file_w32_spawnlp_67_structType;
void FUN0(CWE78_OS_Command_Injection__char_file_w32_spawnlp_67_structType myStruct);
void FUN1()
{
    char * data;
    CWE78_OS_Command_Injection__char_file_w32_spawnlp_67_structType myStruct;
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
    myStruct.structFirst = data;
    FUN0(myStruct);
}
typedef struct _CWE78_OS_Command_Injection__char_file_w32_spawnlp_67_structType
{
    char * structFirst;
} CWE78_OS_Command_Injection__char_file_w32_spawnlp_67_structType;
void FUN0(CWE78_OS_Command_Injection__char_file_w32_spawnlp_67_structType myStruct)
{
    char * data = myStruct.structFirst;
<START>
    _spawnlp(_P_WAIT, COMMAND_INT, COMMAND_INT, COMMAND_ARG1, COMMAND_ARG3, NULL);
<END>
}
