typedef union
{
    wchar_t * unionFirst;
    wchar_t * unionSecond;
} CWE78_OS_Command_Injection__wchar_t_environment_popen_34_unionType;
void FUN0()
{
    wchar_t * data;
    CWE78_OS_Command_Injection__wchar_t_environment_popen_34_unionType myUnion;
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
    myUnion.unionFirst = data;
    {
        wchar_t * data = myUnion.unionSecond;
        {
            FILE *pipe;
<START>
            pipe = POPEN(data, L"w");
<END>
            if (pipe != NULL)
            {
                PCLOSE(pipe);
            }
        }
    }
}
