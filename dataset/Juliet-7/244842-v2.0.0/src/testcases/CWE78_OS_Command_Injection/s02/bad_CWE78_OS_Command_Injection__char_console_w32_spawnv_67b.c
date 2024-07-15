typedef struct _CWE78_OS_Command_Injection__char_console_w32_spawnv_67_structType
{
    char * structFirst;
} CWE78_OS_Command_Injection__char_console_w32_spawnv_67_structType;
void FUN0(CWE78_OS_Command_Injection__char_console_w32_spawnv_67_structType myStruct);
void FUN1()
{
    char * data;
    CWE78_OS_Command_Injection__char_console_w32_spawnv_67_structType myStruct;
    char dataBuffer[100] = COMMAND_ARG2;
    data = dataBuffer;
    {
        size_t dataLen = strlen(data);
        if (100-dataLen > 1)
        {
            if (fgets(data+dataLen, (int)(100-dataLen), stdin) != NULL)
            {
                dataLen = strlen(data);
                if (dataLen > 0 && data[dataLen-1] == '\n')
                {
                    data[dataLen-1] = '\0';
                }
            }
            else
            {
                printLine("fgets() failed");
                data[dataLen] = '\0';
            }
        }
    }
    myStruct.structFirst = data;
    FUN0(myStruct);
}
typedef struct _CWE78_OS_Command_Injection__char_console_w32_spawnv_67_structType
{
    char * structFirst;
} CWE78_OS_Command_Injection__char_console_w32_spawnv_67_structType;
void FUN0(CWE78_OS_Command_Injection__char_console_w32_spawnv_67_structType myStruct)
{
    char * data = myStruct.structFirst;
    {
        char *args[] = {COMMAND_INT_PATH, COMMAND_ARG1, COMMAND_ARG3, NULL};
<START>
        _spawnv(_P_WAIT, COMMAND_INT_PATH, args);
<END>
    }
}
