typedef union
{
    char * unionFirst;
    char * unionSecond;
} CWE78_OS_Command_Injection__char_listen_socket_w32_execvp_34_unionType;
void FUN0()
{
    char * data;
    CWE78_OS_Command_Injection__char_listen_socket_w32_execvp_34_unionType myUnion;
    char dataBuffer[100] = COMMAND_ARG2;
    data = dataBuffer;
    strcat(data, "*.*");
    myUnion.unionFirst = data;
    {
        char * data = myUnion.unionSecond;
        {
            char *args[] = {COMMAND_INT_PATH, COMMAND_ARG1, COMMAND_ARG3, NULL};
            EXECVP(COMMAND_INT, args);
        }
    }
}
