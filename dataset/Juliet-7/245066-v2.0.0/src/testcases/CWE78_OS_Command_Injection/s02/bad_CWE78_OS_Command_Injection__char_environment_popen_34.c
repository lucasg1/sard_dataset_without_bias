typedef union
{
    char * unionFirst;
    char * unionSecond;
} CWE78_OS_Command_Injection__char_environment_popen_34_unionType;
void FUN0()
{
    char * data;
    CWE78_OS_Command_Injection__char_environment_popen_34_unionType myUnion;
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
    myUnion.unionFirst = data;
    {
        char * data = myUnion.unionSecond;
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
}
