typedef struct _CWE78_OS_Command_Injection__wchar_t_environment_w32_spawnlp_67_structType
{
    wchar_t * structFirst;
} CWE78_OS_Command_Injection__wchar_t_environment_w32_spawnlp_67_structType;
void FUN0(CWE78_OS_Command_Injection__wchar_t_environment_w32_spawnlp_67_structType myStruct);
void FUN1()
{
    wchar_t * data;
    CWE78_OS_Command_Injection__wchar_t_environment_w32_spawnlp_67_structType myStruct;
    wchar_t dataBuffer[100] = COMMAND_ARG2;
    data = dataBuffer;
    wcscat(data, L"*.*");
    myStruct.structFirst = data;
    FUN0(myStruct);
}
typedef struct _CWE78_OS_Command_Injection__wchar_t_environment_w32_spawnlp_67_structType
{
    wchar_t * structFirst;
} CWE78_OS_Command_Injection__wchar_t_environment_w32_spawnlp_67_structType;
void FUN0(CWE78_OS_Command_Injection__wchar_t_environment_w32_spawnlp_67_structType myStruct)
{
    wchar_t * data = myStruct.structFirst;
    _wspawnlp(_P_WAIT, COMMAND_INT, COMMAND_INT, COMMAND_ARG1, COMMAND_ARG3, NULL);
}
