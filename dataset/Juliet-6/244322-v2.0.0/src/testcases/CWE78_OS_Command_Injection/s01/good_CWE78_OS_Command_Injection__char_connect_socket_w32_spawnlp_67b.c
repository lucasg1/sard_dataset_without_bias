typedef struct _CWE78_OS_Command_Injection__char_connect_socket_w32_spawnlp_67_structType
{
    char * structFirst;
} CWE78_OS_Command_Injection__char_connect_socket_w32_spawnlp_67_structType;
void FUN0(CWE78_OS_Command_Injection__char_connect_socket_w32_spawnlp_67_structType myStruct);
void FUN1()
{
    char * data;
    CWE78_OS_Command_Injection__char_connect_socket_w32_spawnlp_67_structType myStruct;
    char dataBuffer[100] = COMMAND_ARG2;
    data = dataBuffer;
    strcat(data, "*.*");
    myStruct.structFirst = data;
    FUN0(myStruct);
}
typedef struct _CWE78_OS_Command_Injection__char_connect_socket_w32_spawnlp_67_structType
{
    char * structFirst;
} CWE78_OS_Command_Injection__char_connect_socket_w32_spawnlp_67_structType;
void FUN0(CWE78_OS_Command_Injection__char_connect_socket_w32_spawnlp_67_structType myStruct)
{
    char * data = myStruct.structFirst;
    _spawnlp(_P_WAIT, COMMAND_INT, COMMAND_INT, COMMAND_ARG1, COMMAND_ARG3, NULL);
}
