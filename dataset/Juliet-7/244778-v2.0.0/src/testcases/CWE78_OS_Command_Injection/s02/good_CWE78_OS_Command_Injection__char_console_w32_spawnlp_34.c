typedef union
{
    char * unionFirst;
    char * unionSecond;
} CWE78_OS_Command_Injection__char_console_w32_spawnlp_34_unionType;
void FUN0()
{
    char * data;
    CWE78_OS_Command_Injection__char_console_w32_spawnlp_34_unionType myUnion;
    char dataBuffer[100] = COMMAND_ARG2;
    data = dataBuffer;
    strcat(data, "*.*");
    myUnion.unionFirst = data;
    {
        char * data = myUnion.unionSecond;
        _spawnlp(_P_WAIT, COMMAND_INT, COMMAND_INT, COMMAND_ARG1, COMMAND_ARG3, NULL);
    }
}
