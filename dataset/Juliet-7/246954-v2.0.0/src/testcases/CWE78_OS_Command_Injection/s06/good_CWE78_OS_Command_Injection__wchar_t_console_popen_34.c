typedef union
{
    wchar_t * unionFirst;
    wchar_t * unionSecond;
} CWE78_OS_Command_Injection__wchar_t_console_popen_34_unionType;
void FUN0()
{
    wchar_t * data;
    CWE78_OS_Command_Injection__wchar_t_console_popen_34_unionType myUnion;
    wchar_t data_buf[100] = FULL_COMMAND;
    data = data_buf;
    wcscat(data, L"*.*");
    myUnion.unionFirst = data;
    {
        wchar_t * data = myUnion.unionSecond;
        {
            FILE *pipe;
            pipe = POPEN(data, L"w");
            if (pipe != NULL)
            {
                PCLOSE(pipe);
            }
        }
    }
}
