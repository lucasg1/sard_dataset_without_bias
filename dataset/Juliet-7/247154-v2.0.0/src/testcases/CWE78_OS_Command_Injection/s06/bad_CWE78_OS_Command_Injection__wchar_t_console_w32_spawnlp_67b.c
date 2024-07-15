typedef struct _CWE78_OS_Command_Injection__wchar_t_console_w32_spawnlp_67_structType
{
    wchar_t * structFirst;
} CWE78_OS_Command_Injection__wchar_t_console_w32_spawnlp_67_structType;
void FUN0(CWE78_OS_Command_Injection__wchar_t_console_w32_spawnlp_67_structType myStruct);
void FUN1()
{
    wchar_t * data;
    CWE78_OS_Command_Injection__wchar_t_console_w32_spawnlp_67_structType myStruct;
    wchar_t dataBuffer[100] = COMMAND_ARG2;
    data = dataBuffer;
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
typedef struct _CWE78_OS_Command_Injection__wchar_t_console_w32_spawnlp_67_structType
{
    wchar_t * structFirst;
} CWE78_OS_Command_Injection__wchar_t_console_w32_spawnlp_67_structType;
void FUN0(CWE78_OS_Command_Injection__wchar_t_console_w32_spawnlp_67_structType myStruct)
{
    wchar_t * data = myStruct.structFirst;
<START>
    _wspawnlp(_P_WAIT, COMMAND_INT, COMMAND_INT, COMMAND_ARG1, COMMAND_ARG3, NULL);
<END>
}
