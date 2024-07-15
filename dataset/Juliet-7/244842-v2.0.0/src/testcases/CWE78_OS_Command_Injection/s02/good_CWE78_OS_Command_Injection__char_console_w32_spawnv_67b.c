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
    strcat(data, "*.*");
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
        _spawnv(_P_WAIT, COMMAND_INT_PATH, args);
    }
}
