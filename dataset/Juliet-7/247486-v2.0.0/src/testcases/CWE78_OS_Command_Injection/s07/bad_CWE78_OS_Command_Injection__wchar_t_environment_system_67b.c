typedef struct _CWE78_OS_Command_Injection__wchar_t_environment_system_67_structType
{
    wchar_t * structFirst;
} CWE78_OS_Command_Injection__wchar_t_environment_system_67_structType;
void FUN0(CWE78_OS_Command_Injection__wchar_t_environment_system_67_structType myStruct);
void FUN1()
{
    wchar_t * data;
    CWE78_OS_Command_Injection__wchar_t_environment_system_67_structType myStruct;
    wchar_t data_buf[100] = FULL_COMMAND;
    data = data_buf;
    {
        size_t dataLen = wcslen(data);
        wchar_t * environment = GETENV(ENV_VARIABLE);
        if (environment != NULL)
        {
            wcsncat(data+dataLen, environment, 100-dataLen-1);
        }
    }
    myStruct.structFirst = data;
    FUN0(myStruct);
}
typedef struct _CWE78_OS_Command_Injection__wchar_t_environment_system_67_structType
{
    wchar_t * structFirst;
} CWE78_OS_Command_Injection__wchar_t_environment_system_67_structType;
void FUN0(CWE78_OS_Command_Injection__wchar_t_environment_system_67_structType myStruct)
{
    wchar_t * data = myStruct.structFirst;
<START>
    if (SYSTEM(data) != 0)
<END>
    {
        printLine("command execution failed!");
        exit(1);
    }
}
