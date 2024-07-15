typedef union
{
    char * unionFirst;
    char * unionSecond;
} CWE78_OS_Command_Injection__char_connect_socket_popen_34_unionType;
void FUN0()
{
    char * data;
    CWE78_OS_Command_Injection__char_connect_socket_popen_34_unionType myUnion;
    char data_buf[100] = FULL_COMMAND;
    data = data_buf;
    strcat(data, "*.*");
    myUnion.unionFirst = data;
    {
        char * data = myUnion.unionSecond;
        {
            FILE *pipe;
            pipe = POPEN(data, "w");
            if (pipe != NULL)
            {
                PCLOSE(pipe);
            }
        }
    }
}
