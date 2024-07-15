typedef union
{
    char * unionFirst;
    char * unionSecond;
} CWE78_OS_Command_Injection__char_file_w32_spawnv_34_unionType;
void FUN0()
{
    char * data;
    CWE78_OS_Command_Injection__char_file_w32_spawnv_34_unionType myUnion;
    char dataBuffer[100] = COMMAND_ARG2;
    data = dataBuffer;
    strcat(data, "*.*");
    myUnion.unionFirst = data;
    {
        char * data = myUnion.unionSecond;
        {
            char *args[] = {COMMAND_INT_PATH, COMMAND_ARG1, COMMAND_ARG3, NULL};
            _spawnv(_P_WAIT, COMMAND_INT_PATH, args);
        }
    }
}
