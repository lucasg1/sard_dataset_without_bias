typedef struct _CWE78_OS_Command_Injection__char_environment_popen_67_structType
{
    char * structFirst;
} CWE78_OS_Command_Injection__char_environment_popen_67_structType;
void FUN0(CWE78_OS_Command_Injection__char_environment_popen_67_structType myStruct);
void FUN1()
{
    char * data;
    CWE78_OS_Command_Injection__char_environment_popen_67_structType myStruct;
    char data_buf[100] = FULL_COMMAND;
    data = data_buf;
    {
        size_t dataLen = strlen(data);
        char * environment = GETENV(ENV_VARIABLE);
        if (environment != NULL)
        {
            strncat(data+dataLen, environment, 100-dataLen-1);
        }
    }
    myStruct.structFirst = data;
    FUN0(myStruct);
}
typedef struct _CWE78_OS_Command_Injection__char_environment_popen_67_structType
{
    char * structFirst;
} CWE78_OS_Command_Injection__char_environment_popen_67_structType;
void FUN0(CWE78_OS_Command_Injection__char_environment_popen_67_structType myStruct)
{
    char * data = myStruct.structFirst;
    {
        FILE *pipe;
<START>
        pipe = POPEN(data, "w");
<END>
        if (pipe != NULL)
        {
            PCLOSE(pipe);
        }
    }
}
