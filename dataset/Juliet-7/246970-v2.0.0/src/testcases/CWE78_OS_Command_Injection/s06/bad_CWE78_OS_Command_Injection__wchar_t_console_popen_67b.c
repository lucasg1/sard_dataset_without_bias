typedef struct _CWE78_OS_Command_Injection__wchar_t_console_popen_67_structType
{
    wchar_t * structFirst;
} CWE78_OS_Command_Injection__wchar_t_console_popen_67_structType;
void FUN0(CWE78_OS_Command_Injection__wchar_t_console_popen_67_structType myStruct);
void FUN1()
{
    wchar_t * data;
    CWE78_OS_Command_Injection__wchar_t_console_popen_67_structType myStruct;
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
    myStruct.structFirst = data;
    FUN0(myStruct);
}
typedef struct _CWE78_OS_Command_Injection__wchar_t_console_popen_67_structType
{
    wchar_t * structFirst;
} CWE78_OS_Command_Injection__wchar_t_console_popen_67_structType;
void FUN0(CWE78_OS_Command_Injection__wchar_t_console_popen_67_structType myStruct)
{
    wchar_t * data = myStruct.structFirst;
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
