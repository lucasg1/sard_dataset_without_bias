typedef union
{
    wchar_t * unionFirst;
    wchar_t * unionSecond;
} CWE78_OS_Command_Injection__wchar_t_file_w32_spawnlp_34_unionType;
void FUN0()
{
    wchar_t * data;
    CWE78_OS_Command_Injection__wchar_t_file_w32_spawnlp_34_unionType myUnion;
    wchar_t dataBuffer[100] = COMMAND_ARG2;
    data = dataBuffer;
    wcscat(data, L"*.*");
    myUnion.unionFirst = data;
    {
        wchar_t * data = myUnion.unionSecond;
        _wspawnlp(_P_WAIT, COMMAND_INT, COMMAND_INT, COMMAND_ARG1, COMMAND_ARG3, NULL);
    }
}
