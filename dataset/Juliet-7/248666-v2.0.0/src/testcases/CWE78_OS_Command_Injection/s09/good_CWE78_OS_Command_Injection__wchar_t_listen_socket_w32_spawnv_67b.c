typedef struct _CWE78_OS_Command_Injection__wchar_t_listen_socket_w32_spawnv_67_structType
{
    wchar_t * structFirst;
} CWE78_OS_Command_Injection__wchar_t_listen_socket_w32_spawnv_67_structType;
void FUN0(CWE78_OS_Command_Injection__wchar_t_listen_socket_w32_spawnv_67_structType myStruct);
void FUN1()
{
    wchar_t * data;
    CWE78_OS_Command_Injection__wchar_t_listen_socket_w32_spawnv_67_structType myStruct;
    wchar_t dataBuffer[100] = COMMAND_ARG2;
    data = dataBuffer;
    wcscat(data, L"*.*");
    myStruct.structFirst = data;
    FUN0(myStruct);
}
typedef struct _CWE78_OS_Command_Injection__wchar_t_listen_socket_w32_spawnv_67_structType
{
    wchar_t * structFirst;
} CWE78_OS_Command_Injection__wchar_t_listen_socket_w32_spawnv_67_structType;
void FUN0(CWE78_OS_Command_Injection__wchar_t_listen_socket_w32_spawnv_67_structType myStruct)
{
    wchar_t * data = myStruct.structFirst;
    {
        wchar_t *args[] = {COMMAND_INT_PATH, COMMAND_ARG1, COMMAND_ARG3, NULL};
        _wspawnv(_P_WAIT, COMMAND_INT_PATH, args);
    }
}
