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
    {
        size_t dataLen = wcslen(data);
        if (100-dataLen > 1)
        {
            if (fgetws(data+dataLen, (int)(100-dataLen), stdin) != NULL)
            {
                dataLen = wcslen(data);
                if (dataLen > 0 && data[dataLen-1] == L'\n')
                {
                    data[dataLen-1] = L'\0';
                }
            }
            else
            {
                printLine("fgetws() failed");
                data[dataLen] = L'\0';
            }
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
